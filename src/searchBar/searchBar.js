import "../index.css";
import { useRef } from "react";

function SearchBar(props) {
  const searchValue = useRef();
  function SearchClicker() {
    fetch(
      "https://recommendation-courses.herokuapp.com/" +
        searchValue.current.value
    )
      .then((response) => response.json())
      .then((jsonData) => props.setData(jsonData));
  }

  return (
    <div className="display-1 input-group mb-3 white">
      <input
        type="text"
        className="form-control"
        className="input"
        ref={searchValue}
        onChange={SearchClicker}
      />
      <button
        className="btn btn-outline-secondary"
        type="button"
        id="button-addon2"
      >
        Search
      </button>
    </div>
  );
}
export default SearchBar;
