import Layout from "./Layout";
import classes from "./List.module.css";

function List(props) {
  return (
    <Layout>
      <ul className={classes.list}>
        <h3>{props.title}</h3>
        {props.children}
      </ul>
    </Layout>
  );
}

export default List;
