// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/util/AbstractList.h>
#include <scapix/java_api/com/sun/org/apache/xerces/internal/xs/datatypes/ObjectList.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_LISTDV_LISTDATA_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_LISTDV_LISTDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs { class ListDV_ListData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs::ListDV_ListData>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV$ListData";
	using base_classes = std::tuple<scapix::java_api::java::util::AbstractList, scapix::java_api::com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_LISTDV_LISTDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_LISTDV_LISTDATA)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_LISTDV_LISTDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::dv::xs::ListDV_ListData : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dv/xs/ListDV$ListData",
	java::util::AbstractList,
	com::sun::org::apache::xerces::internal::xs::datatypes::ObjectList>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dv::xs::ListDV_ListData> new_object(jni::ref<jni::array<java::lang::Object>> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean contains(jni::ref<java::lang::Object> p1) { return call_method<"contains", jboolean>(p1); }
	jni::ref<java::lang::Object> item(jint p1) { return call_method<"item", jni::ref<java::lang::Object>>(p1); }
	jni::ref<java::lang::Object> get(jint p1) { return call_method<"get", jni::ref<java::lang::Object>>(p1); }
	jint size() { return call_method<"size", jint>(); }

protected:

	ListDV_ListData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_LISTDV_LISTDATA
