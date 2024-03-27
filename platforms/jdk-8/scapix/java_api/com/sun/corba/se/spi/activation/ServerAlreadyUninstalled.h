// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/UserException.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLED_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation { class ServerAlreadyUninstalled; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::ServerAlreadyUninstalled>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/ServerAlreadyUninstalled";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::UserException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLED)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::ServerAlreadyUninstalled : public jni::object_base<"com/sun/corba/se/spi/activation/ServerAlreadyUninstalled",
	org::omg::CORBA::UserException>
{
public:

	jint serverId() { return get_field<"serverId", jint>(); }
	void serverId(jint v) { set_field<"serverId", jint>(v); }

	static jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }

protected:

	ServerAlreadyUninstalled(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLED