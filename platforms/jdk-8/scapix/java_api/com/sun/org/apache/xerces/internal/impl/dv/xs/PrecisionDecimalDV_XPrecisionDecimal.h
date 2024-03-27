// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_PRECISIONDECIMALDV_XPRECISIONDECIMAL_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_PRECISIONDECIMALDV_XPRECISIONDECIMAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs { class PrecisionDecimalDV_XPrecisionDecimal; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV_XPrecisionDecimal>
{
	static constexpr fixed_string class_name = "com/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_PRECISIONDECIMALDV_XPRECISIONDECIMAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_PRECISIONDECIMALDV_XPRECISIONDECIMAL)
#define SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_PRECISIONDECIMALDV_XPRECISIONDECIMAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV_XPrecisionDecimal : public jni::object_base<"com/sun/org/apache/xerces/internal/impl/dv/xs/PrecisionDecimalDV$XPrecisionDecimal",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV_XPrecisionDecimal> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean isIdentical(jni::ref<com::sun::org::apache::xerces::internal::impl::dv::xs::PrecisionDecimalDV_XPrecisionDecimal> p1) { return call_method<"isIdentical", jboolean>(p1); }

protected:

	PrecisionDecimalDV_XPrecisionDecimal(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_APACHE_XERCES_INTERNAL_IMPL_DV_XS_PRECISIONDECIMALDV_XPRECISIONDECIMAL