// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/LocalObject.h>
#include <scapix/java_api/org/omg/CORBA/Policy.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_ZEROPORTPOLICY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_ZEROPORTPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::extension { class ZeroPortPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::extension::ZeroPortPolicy>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/extension/ZeroPortPolicy";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::LocalObject, scapix::java_api::org::omg::CORBA::Policy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_ZEROPORTPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_ZEROPORTPOLICY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_ZEROPORTPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::extension::ZeroPortPolicy : public jni::object_base<"com/sun/corba/se/spi/extension/ZeroPortPolicy",
	org::omg::CORBA::LocalObject,
	org::omg::CORBA::Policy>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jboolean forceZeroPort() { return call_method<"forceZeroPort", jboolean>(); }
	static jni::ref<com::sun::corba::se::spi::extension::ZeroPortPolicy> getPolicy() { return call_static_method<"getPolicy", jni::ref<com::sun::corba::se::spi::extension::ZeroPortPolicy>>(); }
	jint policy_type() { return call_method<"policy_type", jint>(); }
	jni::ref<org::omg::CORBA::Policy> copy() { return call_method<"copy", jni::ref<org::omg::CORBA::Policy>>(); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	ZeroPortPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_ZEROPORTPOLICY
