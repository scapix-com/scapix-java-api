// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/DOMStringList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMSTRINGLISTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMSTRINGLISTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::dom { class DOMStringListImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::dom::DOMStringListImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/dom/DOMStringListImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::DOMStringList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMSTRINGLISTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMSTRINGLISTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMSTRINGLISTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::dom::DOMStringListImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/dom/DOMStringListImpl",
	java::lang::Object,
	org::w3c::dom::DOMStringList>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMStringListImpl> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::apache::xerces::internal::dom::DOMStringListImpl> new_object(jni::ref<java::util::List> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> item(jint p1) { return call_method<"item", jni::ref<java::lang::String>>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jboolean contains(jni::ref<java::lang::String> p1) { return call_method<"contains", jboolean>(p1); }
	void add(jni::ref<java::lang::String> p1) { return call_method<"add", void>(p1); }

protected:

	DOMStringListImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_DOM_DOMSTRINGLISTIMPL