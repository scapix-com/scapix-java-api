// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/activation/_RepositoryImplBase.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::activation { class RepositoryImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::activation::RepositoryImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/activation/RepositoryImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::activation::_RepositoryImplBase, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/activation/RepositoryPackage/ServerDef.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::activation::RepositoryImpl : public jni::object_base<"com/sun/corba/se/impl/activation/RepositoryImpl",
	com::sun::corba::se::spi::activation::_RepositoryImplBase,
	java::io::Serializable>
{
public:

	jint registerServer(jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef> p1, jint p2) { return call_method<"registerServer", jint>(p1, p2); }
	jint registerServer(jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef> p1) { return call_method<"registerServer", jint>(p1); }
	void unregisterServer(jint p1) { return call_method<"unregisterServer", void>(p1); }
	jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef> getServer(jint p1) { return call_method<"getServer", jni::ref<com::sun::corba::se::spi::activation::RepositoryPackage::ServerDef>>(p1); }
	jboolean isInstalled(jint p1) { return call_method<"isInstalled", jboolean>(p1); }
	void install(jint p1) { return call_method<"install", void>(p1); }
	void uninstall(jint p1) { return call_method<"uninstall", void>(p1); }
	jni::ref<jni::array<jint>> listRegisteredServers() { return call_method<"listRegisteredServers", jni::ref<jni::array<jint>>>(); }
	jint getServerID(jni::ref<java::lang::String> p1) { return call_method<"getServerID", jint>(p1); }
	jni::ref<jni::array<java::lang::String>> getApplicationNames() { return call_method<"getApplicationNames", jni::ref<jni::array<java::lang::String>>>(); }
	static void main(jni::ref<jni::array<java::lang::String>> p1) { return call_static_method<"main", void>(p1); }

protected:

	RepositoryImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ACTIVATION_REPOSITORYIMPL