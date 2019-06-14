<template>
    <f7-page>
        <f7-navbar title="Navbar" back-link="Back">
            <f7-nav-right style="padding-right: 20px;">
                <f7-button href="/">Home</f7-button>
            </f7-nav-right>
        </f7-navbar>
        <f7-list>
            <f7-list-input
                label="Name"
                type="text"
                :value="name"
                @input="name=$event.target.value"
                placeholder="Enter whatever"
                ></f7-list-input>
            <f7-list-input
                label="Say something about you"
                type="text"
                placeholder="Enter something"
                ></f7-list-input>
            <f7-list-input
                label="Age"
                type="number"
                placeholder="AGE"
                ></f7-list-input>
            <f7-list-input
                label="E-mail"
                type="email"
                placeholder="Enter your e-mail id"
                ></f7-list-input>
        </f7-list>
        <f7-block>
            <f7-button @click="showdata">Show Name</f7-button>
        </f7-block>
    </f7-page>

</template>

<script>
export default {
    data(){
        return{
            name:""
        }
    },
    methods:{
        showdata(){
            console.log(this.name)
        }
    }

}
</script>

<style>

</style>
