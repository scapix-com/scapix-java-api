// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/IDLEntity.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_REPOSITORYPACKAGE_SERVERDEF_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_REPOSITORYPACKAGE_SERVERDEF_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation::RepositoryPackage { class ServerDef; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/RepositoryPackage/ServerDef";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::omg::CORBA::portable::IDLEntity>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_REPOSITORYPACKAGE_SERVERDEF_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_REPOSITORYPACKAGE_SERVERDEF)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_REPOSITORYPACKAGE_SERVERDEF

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef : public jni::object_base<"com/sun/corba/se/spi/activation/RepositoryPackage/ServerDef",
	java::lang::Object,
	org::omg::CORBA::portable::IDLEntity>
{
public:

	jni::ref<java::lang::String> applicationName() { return get_field<"applicationName", jni::ref<java::lang::String>>(); }
	void applicationName(jni::ref<java::lang::String> v) { set_field<"applicationName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> serverName() { return get_field<"serverName", jni::ref<java::lang::String>>(); }
	void serverName(jni::ref<java::lang::String> v) { set_field<"serverName", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> serverClassPath() { return get_field<"serverClassPath", jni::ref<java::lang::String>>(); }
	void serverClassPath(jni::ref<java::lang::String> v) { set_field<"serverClassPath", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> serverArgs() { return get_field<"serverArgs", jni::ref<java::lang::String>>(); }
	void serverArgs(jni::ref<java::lang::String> v) { set_field<"serverArgs", jni::ref<java::lang::String>>(v); }
	jni::ref<java::lang::String> serverVmArgs() { return get_field<"serverVmArgs", jni::ref<java::lang::String>>(); }
	void serverVmArgs(jni::ref<java::lang::String> v) { set_field<"serverVmArgs", jni::ref<java::lang::String>>(v); }

	static jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::String> p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }

protected:

	ServerDef(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION_REPOSITORYPACKAGE_SERVERDEF
