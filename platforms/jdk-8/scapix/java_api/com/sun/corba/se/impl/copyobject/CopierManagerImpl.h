// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/copyobject/CopierManager.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_COPYOBJECT_COPIERMANAGERIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_COPYOBJECT_COPIERMANAGERIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::copyobject { class CopierManagerImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::copyobject::CopierManagerImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/copyobject/CopierManagerImpl";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::copyobject::CopierManager>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_COPYOBJECT_COPIERMANAGERIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_COPYOBJECT_COPIERMANAGERIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_COPYOBJECT_COPIERMANAGERIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/copyobject/ObjectCopierFactory.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::copyobject::CopierManagerImpl : public jni::object_base<"com/sun/corba/se/impl/copyobject/CopierManagerImpl",
	java::lang::Object,
	com::sun::corba::se::spi::copyobject::CopierManager>
{
public:

	static jni::ref<com::sun::corba::se::impl::copyobject::CopierManagerImpl> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	void setDefaultId(jint p1) { return call_method<"setDefaultId", void>(p1); }
	jint getDefaultId() { return call_method<"getDefaultId", jint>(); }
	jni::ref<com::sun::corba::se::spi::copyobject::ObjectCopierFactory> getObjectCopierFactory(jint p1) { return call_method<"getObjectCopierFactory", jni::ref<com::sun::corba::se::spi::copyobject::ObjectCopierFactory>>(p1); }
	jni::ref<com::sun::corba::se::spi::copyobject::ObjectCopierFactory> getDefaultObjectCopierFactory() { return call_method<"getDefaultObjectCopierFactory", jni::ref<com::sun::corba::se::spi::copyobject::ObjectCopierFactory>>(); }
	void registerObjectCopierFactory(jni::ref<com::sun::corba::se::spi::copyobject::ObjectCopierFactory> p1, jint p2) { return call_method<"registerObjectCopierFactory", void>(p1, p2); }

protected:

	CopierManagerImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_COPYOBJECT_COPIERMANAGERIMPL
