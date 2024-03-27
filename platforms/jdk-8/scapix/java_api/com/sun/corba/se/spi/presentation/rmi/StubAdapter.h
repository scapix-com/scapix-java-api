// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PRESENTATION_RMI_STUBADAPTER_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PRESENTATION_RMI_STUBADAPTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::presentation::rmi { class StubAdapter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::presentation::rmi::StubAdapter>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/presentation/rmi/StubAdapter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PRESENTATION_RMI_STUBADAPTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PRESENTATION_RMI_STUBADAPTER)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PRESENTATION_RMI_STUBADAPTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/rmi/CORBA/Tie.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA/Object.h>
#include <scapix/java_api/org/omg/CORBA/portable/Delegate.h>
#include <scapix/java_api/org/omg/CORBA/portable/OutputStream.h>
#include <scapix/java_api/org/omg/PortableServer/Servant.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::presentation::rmi::StubAdapter : public jni::object_base<"com/sun/corba/se/spi/presentation/rmi/StubAdapter",
	java::lang::Object>
{
public:

	static jboolean isStubClass(jni::ref<java::lang::Class> p1) { return call_static_method<"isStubClass", jboolean>(p1); }
	static jboolean isStub(jni::ref<java::lang::Object> p1) { return call_static_method<"isStub", jboolean>(p1); }
	static void setDelegate(jni::ref<java::lang::Object> p1, jni::ref<org::omg::CORBA::portable::Delegate> p2) { return call_static_method<"setDelegate", void>(p1, p2); }
	static jni::ref<org::omg::CORBA::Object> activateServant(jni::ref<org::omg::PortableServer::Servant> p1) { return call_static_method<"activateServant", jni::ref<org::omg::CORBA::Object>>(p1); }
	static jni::ref<org::omg::CORBA::Object> activateTie(jni::ref<javax::rmi::CORBA::Tie> p1) { return call_static_method<"activateTie", jni::ref<org::omg::CORBA::Object>>(p1); }
	static jni::ref<org::omg::CORBA::portable::Delegate> getDelegate(jni::ref<java::lang::Object> p1) { return call_static_method<"getDelegate", jni::ref<org::omg::CORBA::portable::Delegate>>(p1); }
	static jni::ref<org::omg::CORBA::ORB> getORB(jni::ref<java::lang::Object> p1) { return call_static_method<"getORB", jni::ref<org::omg::CORBA::ORB>>(p1); }
	static jni::ref<jni::array<java::lang::String>> getTypeIds(jni::ref<java::lang::Object> p1) { return call_static_method<"getTypeIds", jni::ref<jni::array<java::lang::String>>>(p1); }
	static void connect(jni::ref<java::lang::Object> p1, jni::ref<org::omg::CORBA::ORB> p2) { return call_static_method<"connect", void>(p1, p2); }
	static jboolean isLocal(jni::ref<java::lang::Object> p1) { return call_static_method<"isLocal", jboolean>(p1); }
	static jni::ref<org::omg::CORBA::portable::OutputStream> request(jni::ref<java::lang::Object> p1, jni::ref<java::lang::String> p2, jboolean p3) { return call_static_method<"request", jni::ref<org::omg::CORBA::portable::OutputStream>>(p1, p2, p3); }

protected:

	StubAdapter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_PRESENTATION_RMI_STUBADAPTER
