// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractMap.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSNamedMap.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSNAMEDMAPIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSNAMEDMAPIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::util { class XSNamedMapImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractMap, scapix::java_api::com::sun::org::apache::xerces::internal::xs::XSNamedMap>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSNAMEDMAPIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSNAMEDMAPIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSNAMEDMAPIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/util/SymbolHash.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/XSObject.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/util/XSNamedMapImpl",
	java::util::AbstractMap,
	com::sun::org::apache::xerces::internal::xs::XSNamedMap>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl> EMPTY_MAP() { return get_static_field<"EMPTY_MAP", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl>>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl> new_object(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::util::SymbolHash> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl> new_object(jni::ref<jni::array<java::lang::String>> p1, jni::ref<jni::array<com::sun::org::apache::xerces::internal::util::SymbolHash>> p2, jint p3) { return base_::new_object(p1, p2, p3); }
	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::XSNamedMapImpl> new_object(jni::ref<jni::array<com::sun::org::apache::xerces::internal::xs::XSObject>> p1, jint p2) { return base_::new_object(p1, p2); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObject> itemByName(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2) { return call_method<"itemByName", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObject>>(p1, p2); }
	jni::ref<com::sun::org::apache::xerces::internal::xs::XSObject> item(jint p1) { return call_method<"item", jni::ref<com::sun::org::apache::xerces::internal::xs::XSObject>>(p1); }
	jboolean containsKey(jni::ref<java::lang::Object> p1) { return call_method<"containsKey", jboolean>(p1); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::Object> p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<java::util::Set> entrySet() { return call_method<"entrySet", jni::ref<java::util::Set>>(); }

protected:

	XSNamedMapImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_XSNAMEDMAPIMPL
