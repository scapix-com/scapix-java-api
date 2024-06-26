// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/LocalObject.h>
#include <scapix/java_api/org/omg/CORBA/Policy.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_SERVANTCACHINGPOLICY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_SERVANTCACHINGPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::extension { class ServantCachingPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::extension::ServantCachingPolicy>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/extension/ServantCachingPolicy";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::LocalObject, scapix::java_api::org::omg::CORBA::Policy>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_SERVANTCACHINGPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_SERVANTCACHINGPOLICY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_SERVANTCACHINGPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::extension::ServantCachingPolicy : public jni::object_base<"com/sun/corba/se/spi/extension/ServantCachingPolicy",
	org::omg::CORBA::LocalObject,
	org::omg::CORBA::Policy>
{
public:

	static jint NO_SERVANT_CACHING() { return get_static_field<"NO_SERVANT_CACHING", jint>(); }
	static jint FULL_SEMANTICS() { return get_static_field<"FULL_SEMANTICS", jint>(); }
	static jint INFO_ONLY_SEMANTICS() { return get_static_field<"INFO_ONLY_SEMANTICS", jint>(); }
	static jint MINIMAL_SEMANTICS() { return get_static_field<"MINIMAL_SEMANTICS", jint>(); }

	jni::ref<java::lang::String> typeToName() { return call_method<"typeToName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint getType() { return call_method<"getType", jint>(); }
	static jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy> getPolicy() { return call_static_method<"getPolicy", jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy>>(); }
	static jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy> getFullPolicy() { return call_static_method<"getFullPolicy", jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy>>(); }
	static jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy> getInfoOnlyPolicy() { return call_static_method<"getInfoOnlyPolicy", jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy>>(); }
	static jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy> getMinimalPolicy() { return call_static_method<"getMinimalPolicy", jni::ref<com::sun::corba::se::spi::extension::ServantCachingPolicy>>(); }
	jint policy_type() { return call_method<"policy_type", jint>(); }
	jni::ref<org::omg::CORBA::Policy> copy() { return call_method<"copy", jni::ref<org::omg::CORBA::Policy>>(); }
	void destroy() { return call_method<"destroy", void>(); }

protected:

	ServantCachingPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_EXTENSION_SERVANTCACHINGPOLICY
