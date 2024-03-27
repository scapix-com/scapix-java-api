// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/NamedNodeMap.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_NAMEDNODEMAPIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_NAMEDNODEMAPIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::opti { class NamedNodeMapImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::opti::NamedNodeMapImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/opti/NamedNodeMapImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::w3c::dom::NamedNodeMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_NAMEDNODEMAPIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_NAMEDNODEMAPIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_NAMEDNODEMAPIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/w3c/dom/Attr.h>
#include <scapix/java_api/org/w3c/dom/Node.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::opti::NamedNodeMapImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/opti/NamedNodeMapImpl",
	java::lang::Object,
	org::w3c::dom::NamedNodeMap>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::opti::NamedNodeMapImpl> new_object(jni::ref<jni::array<org::w3c::dom::Attr>> p1) { return base_::new_object(p1); }
	jni::ref<org::w3c::dom::Node> getNamedItem(jni::ref<java::lang::String> p1) { return call_method<"getNamedItem", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Node> item(jint p1) { return call_method<"item", jni::ref<org::w3c::dom::Node>>(p1); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<org::w3c::dom::Node> getNamedItemNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"getNamedItemNS", jni::ref<org::w3c::dom::Node>>(p1, p2); }
	jni::ref<org::w3c::dom::Node> setNamedItemNS(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setNamedItemNS", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Node> setNamedItem(jni::ref<org::w3c::dom::Node> p1) { return call_method<"setNamedItem", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Node> removeNamedItem(jni::ref<java::lang::String> p1) { return call_method<"removeNamedItem", jni::ref<org::w3c::dom::Node>>(p1); }
	jni::ref<org::w3c::dom::Node> removeNamedItemNS(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"removeNamedItemNS", jni::ref<org::w3c::dom::Node>>(p1, p2); }

protected:

	NamedNodeMapImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_OPTI_NAMEDNODEMAPIMPL
