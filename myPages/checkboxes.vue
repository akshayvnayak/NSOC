<template>
    <f7-page>
        <f7-list>
            <f7-list-item checkbox title="a" @click="a">df</f7-list-item>
            <f7-list-item checkbox title="b" @click="b">dfd</f7-list-item>
            <f7-list-item checkbox title="c" @click="c">dfasd</f7-list-item>
        </f7-list>

        <f7-list smart-select-item>
            <f7-list-item title="Smart Select" smart-select  data-open-in="popin">
                <select name="Smart select" v-model="opt">
                    <option value="a">A</option>
                    <option value="b">B</option>
                    <option value="c">Aa</option>
                    <option value="d">Basfsdf</option>
                </select>
            </f7-list-item>
            <f7-list-item title="Submit">
                <f7-button class="float-center" raised fill @click="option">SUBMIT</f7-button>
                 <f7-button href="/">Home</f7-button>
            </f7-list-item>
        </f7-list>
    </f7-page>
</template>

<script>
export default {
    data(){
        return{
            opt:"",

            A:false,
            B:false,
            C:false
        }
    },
    methods:{
        option(){
            console.log(this.opt)
        },

        a(){
            if(this.A==true){
                this.A=false
            }
            else{
                this.A=true
            }
            console.log(this.A)
        },
        c(){
            if(this.C==true){
                this.C=false
            }
            else{
                this.C=true
            }
            console.log(this.C)
        },
        b(){
            if(this.B==true){
                this.B=false
            }
            else{
                this.B=true
            }
            console.log(this.B)
        }
    }
}
</script>

<style>

</style>
