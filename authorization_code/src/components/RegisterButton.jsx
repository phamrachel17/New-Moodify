import React from 'react'
import styled from 'styled-components'

const CLIENT_ID = "1bb612d16c3343a99adf682d0670d9ff";
const SPOTIFY_AUTHORIZE_ENDPOINT = "https://accounts.spotify.com/authorize";
const REDIRECT_URL_AFTER_LOGIN = "http://localhost:3000/";
const SPACE_DELIMITER = "%20";
const SCOPES = ["user-read-currently-playing", "user-read-playback-state"];
const SCOPES_URL_PARAM = SCOPES.join(SPACE_DELIMITER);


const handleLogin = () =>{
    window.location = `${SPOTIFY_AUTHORIZE_ENDPOINT}?client_id=${CLIENT_ID}&redirect_uri=${REDIRECT_URL_AFTER_LOGIN}&scope=${SCOPES_URL_PARAM}&response_type=token&show_dialogue=true`;
}

const Button = styled.button`
    background-color: white;
    width: 600px;
    height: 150px;  
    border: none;
    border-radius: 100px;
    color: black;
    text-align: center;
    text-decoration: none; 
    display: inline-block;
    font-size: 48px;
    font-color: black;
    font-family: cousine;
    `

export const RegisterButton = () => {
    return(
        <Button onClick={handleLogin}>Login with Spotify</Button>
    )
}