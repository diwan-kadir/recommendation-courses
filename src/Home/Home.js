import { useEffect, useState } from "react";
import List from "../components/List";
import ListItem from "../components/ListItem";
import "../searchBar/searchBar";
import SearchBar from "../searchBar/searchBar";

function Home() {
  const [data, setData] = useState([[], []]);

  useEffect(() => {
    fetch("https://recommendation-courses.herokuapp.com/")
      .then((response) => response.json())
      .then((jsonData) => setData(jsonData));
  }, []);

  return (
    <>
      <SearchBar data={data} setData={setData} />
      <List title={"Related Courses"}>
        {data[0].map((subData) => (
          <ListItem text={subData} key={subData} />
        ))}
      </List>
      <List title={"Recommended Courses"}>
        {data[1].map((subData) => (
          <ListItem text={subData} key={subData} />
        ))}
      </List>{" "}
    </>
  );
}

export default Home;
