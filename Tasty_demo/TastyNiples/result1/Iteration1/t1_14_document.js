(self.webpackChunkkitsune=self.webpackChunkkitsune||[]).push([[857],{4666:(t,e,n)=>{"use strict";n.d(e,{Z:()=>a});var o,i=n(9755);function a(t,e){a.prototype.init.call(this,t,e)}o=i,a.prototype={init:function(t,e){var n=this,i=o(t),a=i.find('[type="submit"], [data-type="submit"]');e=o.extend({positionMessage:!1,removeForm:!1,replaceFormWithMessage:!1},e),n.options=e,n.voted=!1,n.$form=i,a.on("click",(function(t){if(!n.voted){var e,i,s=o(this),r=s.closest("form"),l=r.attr("action"),c=r.serializeArray(),d={};for(a.attr("disabled","disabled"),r.addClass("busy"),e=0,i=c.length;e<i;e++)d[c[e].name]=c[e].value;d[s.attr("name")]=s.val(),o.ajax({url:l,type:"POST",data:d,dataType:"json",success:function(t){t.survey&&n.showSurvey(t.survey,r.parent()),t.message&&n.showMessage(t.message,s,r),s.addClass("active"),a.prop("disabled",!1),r.removeClass("busy"),n.voted=!0,d.ignored||o(document).trigger("vote",o.extend(d,{url:l})),n.$form.filter((function(){return!r.is(this)})).remove()},error:function(){var t=gettext("There was an error submitting your vote.");n.showMessage(t,s,r),a.prop("disabled",!1),r.removeClass("busy")}})}return o(this).trigger("blur"),t.preventDefault(),!1}))},showMessage:function(t,e,n){var i=this,a=o('<div class="ajax-vote-box"><p class="msg document-vote--heading"></p></div>'),s=e.offset();if(a.find("p").html(t),console.log("options",i.options),i.options.positionMessage){o("body").append(a),a.css({top:s.top-a.height()-30,left:s.left+e.width()/2-a.width()/2});var r=setTimeout(l,1e4);o("body").one("click",l)}else i.options.replaceFormWithMessage?n.replaceWith(a.removeClass("ajax-vote-box")):e.parent().parent().addClass(e.val()).append(a);function l(){a.fadeOut((function(){a.remove()})),i.options.removeForm&&i.$form.fadeOut((function(){i.$form.remove()})),o("body").off("click",l),clearTimeout(r)}},showSurvey:function(t,e){var n=o(t),i=n.find("#remaining-characters"),s=n.find("textarea"),r=parseInt(i.text(),10),l=n.find("input[type=radio][name=unhelpful-reason]"),c=n.find("[type=submit], [data-type=submit]"),d=n.find(".disabled-reason"),f=n.find("textarea");function u(){var t=l.filter(":checked").val(),e=f.val();void 0!==t&&("other"!==t&&"firefox-feedback"!==t||e)?(c.prop("disabled",!1),d.fadeOut(600)):(c.prop("disabled",!0),d.fadeIn(600))}e.after(n),e.remove(),c.prop("disabled",!0),s.on("input",(function(){var t=s.val().length;r-t>=0?i.text(r-t):(i.text(0),s.val(s.val().substr(0,r))),u()})),l.on("change",u),new a(n.find("form"),{replaceFormWithMessage:!0})}}},579:(t,e,n)=>{"use strict";var o,i,a,s=n(5861),r=n(4687),l=n.n(r),c=(n(7804),n(4666)),d=n(4994),f=n(2864),u=n(9755);new f.Z,o=(0,d.Rb)(),i=(0,d.an)(o),a=(0,d.uP)(o,i),u(".document-vote form").append(u('<input type="hidden" name="referrer"/>').attr("value",i)).append(u('<input type="hidden" name="query"/>').attr("value",a)),window.location.href.indexOf("relay-integration")>-1?u("img.lazy").loadnow():u("img.lazy").lazyload(),new c.Z(".document-vote form",{positionMessage:!1,replaceFormWithMessage:!0,removeForm:!0}),document.addEventListener("DOMContentLoaded",(0,s.Z)(l().mark((function t(){var e,n,o;return l().wrap((function(t){for(;;)switch(t.prev=t.next){case 0:if(!((e=document.querySelectorAll('form > input[name="csrfmiddlewaretoken"]')).length>0)){t.next=17;break}return t.prev=2,t.next=5,fetch("/csrftoken");case 5:if((n=t.sent).ok){t.next=8;break}throw new Error(n.statusText);case 8:return t.next=10,n.json();case 10:o=t.sent,e.forEach((function(t){t.setAttribute("value",o.csrfToken)})),t.next=17;break;case 14:t.prev=14,t.t0=t.catch(2),console.error(t.t0);case 17:case"end":return t.stop()}}),t,null,[[2,14]])})))),u(window).on("load",(function(){var t=window.location.hash;t&&(window.location.hash="",setTimeout((function(){window.location.hash=t}),0))}))},7804:(t,e,n)=>{!function(t){function e(){window.location.hash&&(window.location.hash=window.location.hash)}function n(e,n,o){var i=0;return e.filter(".lazy").each((function(){t(this).hasClass("lazy")&&function(e,n){return t(window).height()+t(window).scrollTop()>=t(e).offset().top-n.threshold}(this,n)&&t(this).data("original-src")&&t(this).is(":visible")&&(t.fn.lazyload.loadOriginalImage(this,o),t(this).removeClass("lazy"),i++)})),i}t.fn.lazyload=function(o){var i=t.extend(t.fn.lazyload.defaults,o),a=this,s=!1,r=a.length;t(window).on("scroll",(function(t){s=!0})),n(a,i,null),t(window).trigger("scroll");var l=window.location.hash;e();var c=setInterval((function(){if(r<=0)return t(window).off("scroll"),void clearInterval(c);if(s){s=!1;var e=null;l!=window.location.hash&&(e=window.location.hash,l=window.location.hash);var o=n(a,i,e);r-=o}}),250);return this},t.fn.lazyload.defaults={threshold:750},t.fn.lazyload.loadOriginalImage=function(n,o){null!=o&&t(n).on("load",(function(){e()})),t(n).attr("src",t(n).data("original-src")).removeData("original-src")},t.fn.loadnow=function(e){this.each((function(){t.fn.lazyload.loadOriginalImage(this),t(this).removeClass("lazy")}))}}(n(9755))},2864:(t,e,n)=>{"use strict";n.d(e,{Z:()=>l});var o=n(5861),i=n(4687),a=n.n(i),s=n(7354),r=n(9755);function l(t){var e=this;this.$container=t||r("body"),this.state={},this.loadData(),this.initEvents(),this.wrapTOCs(),this.initShowFuncs(),this.updateUI().then((function(){e.updateState(),e.showAndHide()}))}l.prototype.productShortMap={fx:"firefox",m:"mobile",tb:"thunderbird"},l.prototype.platformMap={Windows:{default:"win10",XP:"winxp",Vista:"win7",7:"win7",8:"win8",8.1:"win8",10:"win10",11:"win11"},"Mac OS":"mac"},l.prototype.loadData=function(){try{this.data=JSON.parse(this.$container.find(".showfor-data").html())}catch(t){this.data={products:[],platforms:[],versions:[]}}for(var t in this.productSlugs=this.data.products.map((function(t){return t.slug})),this.platformSlugs=[],this.data.platforms)this.data.platforms[t].forEach(function(t){this.platformSlugs.push(t.slug)}.bind(this));for(var e in this.versionSlugs={},this.data.versions)this.data.versions[e].forEach(function(t){this.versionSlugs[t.slug]=e}.bind(this))},l.prototype.initEvents=function(){window.onpopstate=this.updateUI.bind(this),this.$container.on("change keyup","input, select",this.onUIChange.bind(this))},l.prototype.ensureSelect=function(t,e,n,o){var i,a,s,l={};function c(t,e){for(var n=0;n<t.length;n++)if(t[n].slug===e)return t[n];return null}if("version"===e)null!==(s=c(this.data.versions[n],o))&&(l["data-min"]=s.min_version,l["data-max"]=s.max_version);else if("platform"===e)s=c(this.data.platforms[n],o);else{if("product"!==e)throw new Error("Unknown showfor select type "+e);s=c(this.data.products,o)}if(null!==s){if(o=e+":"+o,0===t.find('option[value="'+o+'"]').length){for(a in i=r("<option>").attr("value",o).text(s.name),l)i.attr(a,l[a]);t.append(i)}t.val(o)}},l.prototype.updateUI=(0,o.Z)(a().mark((function t(){var e,n,o,i,l,c,d,f,u,h,p,v,m,w,g=this;return a().wrap((function(t){for(;;)switch(t.prev=t.next){case 0:if(n=null,(o=document.location.hash).indexOf(":")>=0&&(n=o.slice(1)),null===n&&window.sessionStorage&&(n=sessionStorage.getItem("showfor::persist")),!n){t.next=10;break}if(i=!1,this.$container.find(".product input[type=checkbox]").prop("checked",!1),n.split("&").forEach(function(t){var e=t.split(":"),n=e[0]||null,o=e[1]||null,a=e[2]||null,s=this.$container.find('.product[data-product="'+n+'"]');if(0!==s.length){if(i=!0,s.find('input[type=checkbox][value="product:'+n+'"]').prop("checked",!0),o){var r=s.find("select.platform");this.ensureSelect(r,"platform",n,o)}if(a){var l=s.find("select.version");this.ensureSelect(l,"version",n,a)}}}.bind(this)),!i){t.next=10;break}return t.abrupt("return");case 10:return l=new s.ZP,t.next=13,l.getBrowser();case 13:return c=t.sent,t.next=16,l.getOS();case 16:d=t.sent,f=null===(e=c.version)||void 0===e?void 0:e.toString("major"),u=this.$container.find(".product"),h={},u.each((function(t,e){var n=r(e);h[n.data("product")]=n})),c.mozilla&&f&&(d.mobile&&-1!==this.productSlugs.indexOf("mobile")?(p="m"+f,v=h.mobile.find("select.version"),this.ensureSelect(v,"version","mobile",p)):-1!==this.productSlugs.indexOf("firefox")&&(m="fx"+f,w=h.firefox.find("select.version"),this.ensureSelect(w,"version","firefox",m))),u.find("select.platform").each((function(t,e){var n=r(e),o=n.parents(".product").data("product"),i=g.platformMap[d.name]||d.name.toLowerCase();"string"!=typeof i&&(i=i[d.version]||i.default),g.ensureSelect(n,"platform",o,i)}));case 23:case"end":return t.stop()}}),t,this)}))),l.prototype.onUIChange=function(){this.updateState(),this.showAndHide(),this.persist()},l.prototype.persist=function(){var t,e,n=0,o="";for(t in this.state)(e=this.state[t]).enabled&&(n>0&&(o+="&"),o+=t+":"+(e.platform||"")+":"+(e.version&&e.version.slug||""),n++);""!==o&&((""===document.location.hash||document.location.hash.indexOf(":")>=0)&&history.replaceState(this.state,o,"#"+o),window.sessionStorage&&window.sessionStorage.setItem("showfor::persist",o))},l.prototype.updateState=function(){this.state={},this.$container.find(".product").each(function(t,e){var n=r(e),o=n.data("product");this.state[o]={enabled:n.find("input[type=checkbox]").prop("checked")},n.find("select").each(function(t,e){var n=r(e),i=n.val().split(":"),a=i[0],s=i[1];if("version"===a){var l=n.find("option:selected");s={slug:s,min:parseFloat(l.data("min")),max:parseFloat(l.data("max"))}}this.state[o][a]=s}.bind(this))}.bind(this))},l.prototype.wrapTOCs=function(){this.$container.find("#toc a").each((function(t,e){var n=r(e),o=n.attr("href");if("#"===o[0])for(var i=r(o),a=n.parent();i.length;){if(i.hasClass("for")){var s=r("<span/>",{class:"for","data-for":i.data("for")});a=a.wrap(s)}i=i.parent()}}))},l.prototype.initShowFuncs=function(){this.$container.find(".for").each(function(t,e){var n=r(e),o=n.data("for").split(/\s*,\s*/),i=this.matchesCriteria.bind(this,o);n.data("show-func",i)}.bind(this))},l.prototype.showAndHide=function(){this.$container.find(".for").each((function(t,e){var n=r(e),o=n.data("show-func")();void 0!==o?n.toggle(o):n.show()}))},l.prototype.matchesCriteria=function(t){var e=!1,n=!1,o=!1,i=!1,a=[];for(var s in this.state){var r=this.state[s];r.enabled&&r.platform&&a.push(r.platform)}return t.forEach(function(t){var s,r,l=0===t.indexOf("not");l&&(t=t.replace(/^not ?/,""));var c=">=";if("="===(t=this.productShortMap[t]||t)[0]&&(t=t.slice(1),c="="),this.productSlugs.indexOf(t)>=0)e=!0,this.state[t].enabled!==l&&(n=!0);else if(void 0!==this.versionSlugs[t]){s=this.versionSlugs[t],e=!0,r=parseFloat(/^[a-z]+([\d\.]+)$/.exec(t)[1]);var d=this.state[s].version.min,f=this.state[s].version.max;(this.state[s].enabled&&(">="===c&&r<f||"="===c&&r>=d&&r<f))!==l&&(n=!0)}else if(this.platformSlugs.indexOf(t)>=0)o=!0,a.indexOf(t)>=0!==l&&(i=!0);else if("win"===t){o=!0;var u=!1;["winxp","win7","win8","win10","win11"].forEach((function(t){a.indexOf(t)>=0&&(u=!0)})),u!==l&&(i=!0)}}.bind(this)),(!e||n)&&(!o||i)}},247:(t,e,n)=>{"use strict";var o,i=n(7830),a=n(9755);(o=a)((function(){function t(){return o("html").attr("lang")}function e(){return o("body").data("default-slug")}o("body").is(".document")&&(o(document).on("vote",(function(n,o){var a;if(_gaq){if("helpful"in o)a="Helpful";else{if(!("not-helpful"in o))return;a="Not Helpful"}(0,i.Z)("Article Vote",o.source+" - "+a,e()+" / "+t())}})),o("#os").on("change",(function(){(0,i.Z)("ShowFor Switch","OS - "+o(this).val(),e()+" / "+t())})),o("#browser").on("change",(function(){(0,i.Z)("ShowFor Switch","Version - "+o(this).val(),e()+" / "+t())})),setTimeout((function(){(0,i.Z)("Article Read",e()+" / "+t())}),1e4))}))}},t=>{var e=e=>t(t.s=e);t.O(0,[901,354,672],(()=>(e(579),e(247)))),t.O()}]);