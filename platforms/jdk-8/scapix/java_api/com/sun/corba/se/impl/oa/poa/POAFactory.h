// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/oa/ObjectAdapterFactory.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_POAFACTORY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_POAFACTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::oa::poa { class POAFactory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::oa::poa::POAFactory>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/oa/poa/POAFactory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::oa::ObjectAdapterFactory>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_POAFACTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_POAFACTORY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_POAFACTORY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/impl/logging/POASystemException.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectAdapterId.h>
#include <scapix/java_api/com/sun/corba/se/spi/oa/ObjectAdapter.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/org/omg/PortableServer/POA.h>
#include <scapix/java_api/org/omg/PortableServer/POAManager.h>
#include <scapix/java_api/org/omg/PortableServer/Servant.h>
#include <scapix/java_api/org/omg/PortableServer/portable/Delegate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::oa::poa::POAFactory : public jni::object_base<"com/sun/corba/se/impl/oa/poa/POAFactory",
	java::lang::Object,
	com::sun::corba::se::spi::oa::ObjectAdapterFactory>
{
public:

	jni::ref<com::sun::corba::se::impl::logging::POASystemException> getWrapper() { return call_method<"getWrapper", jni::ref<com::sun::corba::se::impl::logging::POASystemException>>(); }
	static jni::ref<com::sun::corba::se::impl::oa::poa::POAFactory> new_object() { return base_::new_object(); }
	jni::ref<org::omg::PortableServer::POA> lookupPOA(jni::ref<org::omg::PortableServer::Servant> p1) { return call_method<"lookupPOA", jni::ref<org::omg::PortableServer::POA>>(p1); }
	void registerPOAForServant(jni::ref<org::omg::PortableServer::POA> p1, jni::ref<org::omg::PortableServer::Servant> p2) { return call_method<"registerPOAForServant", void>(p1, p2); }
	void unregisterPOAForServant(jni::ref<org::omg::PortableServer::POA> p1, jni::ref<org::omg::PortableServer::Servant> p2) { return call_method<"unregisterPOAForServant", void>(p1, p2); }
	void init(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_method<"init", void>(p1); }
	jni::ref<com::sun::corba::se::spi::oa::ObjectAdapter> find(jni::ref<com::sun::corba::se::spi::ior::ObjectAdapterId> p1) { return call_method<"find", jni::ref<com::sun::corba::se::spi::oa::ObjectAdapter>>(p1); }
	void shutdown(jboolean p1) { return call_method<"shutdown", void>(p1); }
	void removePoaManager(jni::ref<org::omg::PortableServer::POAManager> p1) { return call_method<"removePoaManager", void>(p1); }
	void addPoaManager(jni::ref<org::omg::PortableServer::POAManager> p1) { return call_method<"addPoaManager", void>(p1); }
	jint newPOAManagerId() { return call_method<"newPOAManagerId", jint>(); }
	void registerRootPOA() { return call_method<"registerRootPOA", void>(); }
	jni::ref<org::omg::PortableServer::POA> getRootPOA() { return call_method<"getRootPOA", jni::ref<org::omg::PortableServer::POA>>(); }
	jni::ref<org::omg::PortableServer::portable::Delegate> getDelegateImpl() { return call_method<"getDelegateImpl", jni::ref<org::omg::PortableServer::portable::Delegate>>(); }
	jint newPOAId() { return call_method<"newPOAId", jint>(); }
	jni::ref<com::sun::corba::se::spi::orb::ORB> getORB() { return call_method<"getORB", jni::ref<com::sun::corba::se::spi::orb::ORB>>(); }

protected:

	POAFactory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_OA_POA_POAFACTORY
