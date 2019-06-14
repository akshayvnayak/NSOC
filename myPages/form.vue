<template>
    <f7-page>
        <f7-navbar title="FORM1" back-link></f7-navbar>
        <f7-list>
            <f7-list-input
                label="Name"
                :value="name"
                @input="name=$event.target.value"
                type="text"
                placeholder='Enter Name'
                ></f7-list-input>
            <f7-list-input
                label="Branch"
                :value="branch"
                @input="branch=$event.target.value"
                type="text"
                placeholder='Enter Branch'
                ></f7-list-input>
            <f7-list-item title="Year" smart-select>
                <select name="Year" v-model="year">
                    <option value="1">1</option>
                    <option value="2">2</option>
                    <option value="3">3</option>
                    <option value="4">4</option>
                </select><br><br><br>
            </f7-list-item>
            <f7-button raised round fill @click="func">SUBMIT</f7-button>
        </f7-list>
    </f7-page>
</template>

<script>
import firebase from '../../js/firebaseInit'
import { log } from 'util';
export default {

    data(){
        return{
            name:"",
            branch:"",
            year:""
        }
    },
    methods:{
        func(){
            console.log(this.name+'\t'+this.branch+'\t'+this.year)
            firebase.db.doc("College/"+this.name).set({
                name:this.name,
                branch:this.branch,
                year:this.year
            })
            .then(snapshot=>{
                console.log("Submitted");
            })
        }

    }

}
</script>

<style>

</style>
