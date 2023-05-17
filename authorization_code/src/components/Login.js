import React from "react";
import ReactDOM from 'react-dom';
import "../styles/Login.css";
import { RegisterButton } from './RegisterButton'


class Login extends React.Component {
    constructor() {
        super();
        this.state = {
          expanded: true,
          activeKey: "1",
          visible: true
        };
        this.handleSelect = this.handleSelect.bind(this);
      }
      handleSelect(eventKey) {
        this.setState({
          activeKey: eventKey
        });
      }
      render() {
        return (
            <div id="login">
                <div className="login-title">Moodify</div>
                <div className="login-subtitle">What is your mood today?</div>
                <div class="centered"><RegisterButton/></div>
                
                <div className="login-footer">Made By: Rachel Pham, Adrian Khor, Harchet Singh, and Gency Dela Torre</div>
            </div>
        );
      }
}

export default Login;