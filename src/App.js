import logo from './logo.svg';
// import './App.css';
import { useEffect, useState } from 'react';
import axios from 'axios';
import './index.css';
import Container from 'react-bootstrap/Container';
import 'bootstrap/dist/css/bootstrap.min.css';

function App() {
  const CLIENT_ID = "9eab633783f745678bba09700bdd6d7a"
  const REDIRECT_URI = "http://localhost:3000"
  const AUTH_ENDPOINT = "https://accounts.spotify.com/authorize"
  const RESPONSE_TYPE = "token"
  const SCOPES = [
    "user-top-read",
    "user-read-currently-playing",
    "user-read-playback-state",
    "user-modify-playback-state",
    "user-read-recently-played"
  ]

  const [token, setToken] = useState("")
  const [searchKey, setSearchKey] = useState("")
  const [artists, setTopArtists] = useState([])
  const [animalInput, setAnimalInput] = useState("");
  const [result, setResult] = useState();

  useEffect(() => {
      const hash = window.location.hash
      let token = window.localStorage.getItem("token")

      if (!token && hash) {
          token = hash.substring(1).split("&").find(elem => elem.startsWith("access_token")).split("=")[1]

          window.location.hash = ""
          window.localStorage.setItem("token", token)
      }

      setToken(token)

  }, [])

  const login = () => {
    // Handle any login logic or redirection here
    window.location.href = `${AUTH_ENDPOINT}?client_id=${CLIENT_ID}&redirect_uri=${REDIRECT_URI}&scope=${SCOPES.join("%20")}&response_type=${RESPONSE_TYPE}`;

  };

  const logout = () => {
    setToken("")
    window.localStorage.removeItem("token")
  }

  // const searchArtists = async (e) => {
  //   e.preventDefault()
  //   const {data} = await axios.get("https://api.spotify.com/v1/search", {
  //       headers: {
  //           Authorization: `Bearer ${token}`
  //       },
  //       params: {
  //           q: searchKey,
  //           type: "artist"
  //       }
  //   })

  //   setArtists(data.artists.items)
  // }

  // Get user's top artists to use in ChatGPT model
  const submitForm = async (e) => {
    e.preventDefault()
    try {
      // Second API call
      // const {artist_data} = await axios.get("https://api.spotify.com/v1/me/top/artists?time_range=short_term&limit=5", {
      //   headers: {
      //       Authorization: `Bearer ${token}`
      //   }
      // });
      const response = await fetch("/api/generate", {
        method: "POST",
        headers: {
          "Content-Type": "application/json",
        },
        body: JSON.stringify({ animal: animalInput }),
      });

      const data = await response.json();
      if (response.status !== 200) {
        throw data.error || new Error(`Request failed with status ${response.status}`);
      }

      // console.log(artist_data);
      // setTopArtists(artist_data.items);

      setResult(data.result);
      setAnimalInput("");

    } catch(error) {
      console.error(error);
      alert(error.message);
    }

  }


  // const renderArtists = () => {
  //   return artists.map(artist => (
  //       <div key={artist.id}>
  //           {artist.images.length ? <img width={"100%"} src={artist.images[0].url} alt=""/> : <div>No Image</div>}
  //           {artist.name}
  //       </div>
  //   ))
  // }

  return (
    <div id="root" className="flex flex-col min-h-screen bg-gradient-to-b from-emerald-800 to-emerald-50">
      <Container>
        <h1 className="text-white text-center text-5xl font-medium pt-12">Moodify</h1>
        {!token ?
          <div className="flex justify-center mt-40">
            <button className="bg-slate-700 hover:bg-blue-700 text-white text-1xl py-3 px-10 rounded-full" onClick={login}>Login with Spotify</button>
          </div>
        : <button className="bg-slate-700 hover:bg-blue-700 text-white py-2 px-4 rounded-full" onClick={logout}>Logout</button>}

          {token ?
            <div>
            {/* <form onSubmit={searchArtists}>
              <input type="text" onChange={e => setSearchKey(e.target.value)}/>
              <button type={"submit"}>Search</button>
              {renderArtists()}
            </form> */}
            <form onSubmit={submitForm}>
              <input
                type="text"
                name="animal"
                placeholder="Enter an animal"
                value={animalInput}
                onChange={(e) => setAnimalInput(e.target.value)}
              />
              <input type="submit" value="Generate names" />
              <div>{result}</div>
            </form>
            {/* <form onSubmit>
              <input type="text" placeholder="Enter a Prompt" value={animalInput} onChange={e => setAnimalInput(e.target.value)}/>
              <input type="submit" value="Generate names" />
              <button onClick={submitForm}>SUBMIT</button>
              {renderArtists()}
            </form> */}
            </div>   
            : null    
          }
      </Container>
    </div>
  );
}

export default App;
