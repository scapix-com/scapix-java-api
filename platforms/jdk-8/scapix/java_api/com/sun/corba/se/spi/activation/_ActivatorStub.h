// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/com/sun/corba/se/spi/activation/Activator.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__ACTIVATORSTUB_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__ACTIVATORSTUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::activation { class _ActivatorStub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::activation::_ActivatorStub>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/activation/_ActivatorStub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::com::sun::corba::se::spi::activation::Activator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__ACTIVATORSTUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__ACTIVATORSTUB)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__ACTIVATORSTUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/activation/EndPointInfo.h>
#include <scapix/java_api/com/sun/corba/se/spi/activation/Server.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::activation::_ActivatorStub : public jni::object_base<"com/sun/corba/se/spi/activation/_ActivatorStub",
	org::omg::CORBA::portable::ObjectImpl,
	com::sun::corba::se::spi::activation::Activator>
{
public:

	static jni::ref<com::sun::corba::se::spi::activation::_ActivatorStub> new_object() { return base_::new_object(); }
	void active(jint p1, jni::ref<com::sun::corba::se::spi::activation::Server> p2) { return call_method<"active", void>(p1, p2); }
	void registerEndpoints(jint p1, jni::ref<java::lang::String> p2, jni::ref<jni::array<com::sun::corba::se::spi::activation::EndPointInfo>> p3) { return call_method<"registerEndpoints", void>(p1, p2, p3); }
	jni::ref<jni::array<jint>> getActiveServers() { return call_method<"getActiveServers", jni::ref<jni::array<jint>>>(); }
	void activate(jint p1) { return call_method<"activate", void>(p1); }
	void shutdown(jint p1) { return call_method<"shutdown", void>(p1); }
	void install(jint p1) { return call_method<"install", void>(p1); }
	jni::ref<jni::array<java::lang::String>> getORBNames(jint p1) { return call_method<"getORBNames", jni::ref<jni::array<java::lang::String>>>(p1); }
	void uninstall(jint p1) { return call_method<"uninstall", void>(p1); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_ActivatorStub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ACTIVATION__ACTIVATORSTUB