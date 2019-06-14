<template>
    <f7-page>
        <f7-block>
            <f7-button raised fill round color="red" href="/navbar/"><strong>Navbar</strong></f7-button>
            <f7-button raised fill round small href="/buttons/">Buttons</f7-button>
            <f7-button class="float-right" raised fill round href="/checkboxes/">Checkboxes</f7-button>    
            <f7-button raised fill round href="/form/">Form</f7-button>
            <f7-button raised fill round @click="buttonfunc" >button</f7-button>

            <f7-button fill raised href="/counter/">Counter</f7-button>
            <f7-button fill raised href="/form1/">form1</f7-button>

            
            
        
        
        </f7-block>
    </f7-page>
</template>

<script>
export default {
    methods:{
        buttonfunc(){
            console.log("Hello World!!!!!!!!!!")

        }

    }
}
</script>

<style>

</style>