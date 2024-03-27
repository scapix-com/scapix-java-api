// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/LSInputList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_LSINPUTLISTIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_LSINPUTLISTIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::util { class LSInputListImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::xs::util::LSInputListImpl>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/xs/util/LSInputListImpl";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractList, scapix::java_api::com::sun::org::apache::xerces::internal::xs::LSInputList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_LSINPUTLISTIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_LSINPUTLISTIMPL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_LSINPUTLISTIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/w3c/dom/ls/LSInput.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::xs::util::LSInputListImpl : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/xs/util/LSInputListImpl",
	java::util::AbstractList,
	com::sun::org::apache::xerces::internal::xs::LSInputList>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::LSInputListImpl> EMPTY_LIST() { return get_static_field<"EMPTY_LIST", jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::LSInputListImpl>>(); }

	static jni::ref<com::sun::org::apache::xerces::internal::impl::xs::util::LSInputListImpl> new_object(jni::ref<jni::array<org::w3c::dom::ls::LSInput>> p1, jint p2) { return base_::new_object(p1, p2); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jni::ref<org::w3c::dom::ls::LSInput> item(jint p1) { return call_method<"item", jni::ref<org::w3c::dom::ls::LSInput>>(p1); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jint size() { return call_method<"size", jint>(); }
	jni::ref<jni::array<java::lang::Object>> toArray() { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(); }
	jni::ref<jni::array<java::lang::Object>> toArray(jni::ref<jni::array<java::lang::Object>> p1) { return call_method<"toArray", jni::ref<jni::array<java::lang::Object>>>(p1); }

protected:

	LSInputListImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_XS_UTIL_LSINPUTLISTIMPL
