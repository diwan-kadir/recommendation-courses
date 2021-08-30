import classes from "./ListItem.module.css";
function ListItem(props) {
  return <li className={classes.listitem}> {props.text}</li>;
}

export default ListItem;
