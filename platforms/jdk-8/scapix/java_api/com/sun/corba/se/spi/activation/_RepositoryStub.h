// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/com/sun/corba/se/spi/activation/Repository.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__REPOSITORYSTUB_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__REPOSITORYSTUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation { class _RepositoryStub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::_RepositoryStub>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/_RepositoryStub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::com::sun::corba::se::spi::activation::Repository>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__REPOSITORYSTUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__REPOSITORYSTUB)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__REPOSITORYSTUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/activation/RepositoryPackage/ServerDef.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::_RepositoryStub : public jni::object_base<"com/sun/corba/se/spi/activation/_RepositoryStub",
	org::omg::CORBA::portable::ObjectImpl,
	com::sun::corba::se::spi::activation::Repository>
{
public:

	static jni::ref<com::sun::corba::se::spi::activation::_RepositoryStub> new_object() { return base_::new_object(); }
	jint registerServer(jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef> p1) { return call_method<"registerServer", jint>(p1); }
	void unregisterServer(jint p1) { return call_method<"unregisterServer", void>(p1); }
	jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef> getServer(jint p1) { return call_method<"getServer", jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef>>(p1); }
	jboolean isInstalled(jint p1) { return call_method<"isInstalled", jboolean>(p1); }
	void install(jint p1) { return call_method<"install", void>(p1); }
	void uninstall(jint p1) { return call_method<"uninstall", void>(p1); }
	jni::ref<jni::array<jint>> listRegisteredServers() { return call_method<"listRegisteredServers", jni::ref<jni::array<jint>>>(); }
	jni::ref<jni::array<java::lang::String>> getApplicationNames() { return call_method<"getApplicationNames", jni::ref<jni::array<java::lang::String>>>(); }
	jint getServerID(jni::ref<java::lang::String> p1) { return call_method<"getServerID", jint>(p1); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_RepositoryStub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__REPOSITORYSTUB