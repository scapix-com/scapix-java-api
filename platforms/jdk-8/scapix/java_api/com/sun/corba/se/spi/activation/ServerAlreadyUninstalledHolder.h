// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/Streamable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLEDHOLDER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLEDHOLDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation { class ServerAlreadyUninstalledHolder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::ServerAlreadyUninstalledHolder>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/ServerAlreadyUninstalledHolder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::Streamable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLEDHOLDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLEDHOLDER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLEDHOLDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/activation/ServerAlreadyUninstalled.h>
#include <scapix/java_api/org/omg/CORBA/TypeCode.h>
#include <scapix/java_api/org/omg/CORBA/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::ServerAlreadyUninstalledHolder : public jni::object_base<"com/sun/corba/se/spi/activation/ServerAlreadyUninstalledHolder",
	java::lang::Object,
	org::omg::CORBA::portable::Streamable>
{
public:

	jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled> value() { return get_field<"value", jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled>>(); }
	void value(jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled> v) { set_field<"value", jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled>>(v); }

	static jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalledHolder> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalledHolder> new_object(jni::ref<com::sun::corba::se::spi::activation::ServerAlreadyUninstalled> p1) { return base_::new_object(p1); }
	void _read(jni::ref<org::omg::CORBA::portable::InputStream> p1) { return call_method<"_read", void>(p1); }
	void _write(jni::ref<org::omg::CORBA::portable::OutputStream> p1) { return call_method<"_write", void>(p1); }
	jni::ref<org::omg::CORBA::TypeCode> _type() { return call_method<"_type", jni::ref<org::omg::CORBA::TypeCode>>(); }

protected:

	ServerAlreadyUninstalledHolder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_SERVERALREADYUNINSTALLEDHOLDER
