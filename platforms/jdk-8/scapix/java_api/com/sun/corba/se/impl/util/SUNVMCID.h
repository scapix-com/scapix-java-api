// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_SUNVMCID_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_SUNVMCID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::util { class SUNVMCID; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::util::SUNVMCID>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/util/SUNVMCID";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_SUNVMCID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_SUNVMCID)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_SUNVMCID

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::util::SUNVMCID : public jni::object_base<"com/sun/corba/se/impl/util/SUNVMCID",
	java::lang::Object>
{
public:

	static jint value() { return get_static_field<"value", jint>(); }


protected:

	SUNVMCID(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_UTIL_SUNVMCID
