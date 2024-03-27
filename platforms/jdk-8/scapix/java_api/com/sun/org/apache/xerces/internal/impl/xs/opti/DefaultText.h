// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/xs/opti/NodeImpl.h>
#include <scapix/java_api/org/w3c/dom/Text.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_DEFAULTTEXT_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_DEFAULTTEXT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::opti { class DefaultText; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultText>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultText";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl, scapix::java_api::org::w3c::dom::Text>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_DEFAULTTEXT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_DEFAULTTEXT)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_DEFAULTTEXT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultText : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/opti/DefaultText",
	com::sun::org::apache::xerces::internal::impl::xs::opti::NodeImpl,
	org::w3c::dom::Text>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::opti::DefaultText> new_object() { return base_::new_object(); }
	jni::ref<java::lang::String> getData() { return call_method<"getData", jni::ref<java::lang::String>>(); }
	void setData(jni::ref<java::lang::String> p1) { return call_method<"setData", void>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<java::lang::String> substringData(jint p1, jint p2) { return call_method<"substringData", jni::ref<java::lang::String>>(p1, p2); }
	void appendData(jni::ref<java::lang::String> p1) { return call_method<"appendData", void>(p1); }
	void insertData(jint p1, jni::ref<java::lang::String> p2) { return call_method<"insertData", void>(p1, p2); }
	void deleteData(jint p1, jint p2) { return call_method<"deleteData", void>(p1, p2); }
	void replaceData(jint p1, jint p2, jni::ref<java::lang::String> p3) { return call_method<"replaceData", void>(p1, p2, p3); }
	jni::ref<org::w3c::dom::Text> splitText(jint p1) { return call_method<"splitText", jni::ref<org::w3c::dom::Text>>(p1); }
	jboolean isElementContentWhitespace() { return call_method<"isElementContentWhitespace", jboolean>(); }
	jni::ref<java::lang::String> getWholeText() { return call_method<"getWholeText", jni::ref<java::lang::String>>(); }
	jni::ref<org::w3c::dom::Text> replaceWholeText(jni::ref<java::lang::String> p1) { return call_method<"replaceWholeText", jni::ref<org::w3c::dom::Text>>(p1); }

protected:

	DefaultText(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_DEFAULTTEXT
