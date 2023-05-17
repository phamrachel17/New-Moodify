import React from "react";
import "../styles/Genre.css";

class Genre extends React.Component {
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
            <div id="genre">

            </div>
        );
      }
}

export default Genre; 