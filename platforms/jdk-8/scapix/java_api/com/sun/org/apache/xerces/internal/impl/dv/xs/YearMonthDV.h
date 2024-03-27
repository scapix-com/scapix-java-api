// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/xs/AbstractDateTimeDV.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_YEARMONTHDV_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_YEARMONTHDV_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs { class YearMonthDV; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs::YearMonthDV>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dv/xs/YearMonthDV";
	using base_classes = std::tuple<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_YEARMONTHDV_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_YEARMONTHDV)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_YEARMONTHDV

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/apache/xerces/internal/impl/dv/ValidationContext.h>
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::apache::xerces::internal::impl::dv::xs::YearMonthDV : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dv/xs/YearMonthDV",
	com::sun::org::apache::xerces::internal::impl::dv::xs::AbstractDateTimeDV>
{
public:

	static jni::ref<com::sun::org::apache::xerces::internal::impl::dv::xs::YearMonthDV> new_object() { return base_::new_object(); }
	jni::ref<java::lang::Object> getActualValue(jni::ref<java::lang::String> p1, jni::ref<com::sun::org::apache::xerces::internal::impl::dv::ValidationContext> p2) { return call_method<"getActualValue", jni::ref<java::lang::Object>>(p1, p2); }

protected:

	YearMonthDV(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_YEARMONTHDV
