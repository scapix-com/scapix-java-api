// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/presentation/rmi/StubFactoryFactoryBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBFACTORYFACTORYSTATICIMPL_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBFACTORYFACTORYSTATICIMPL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::presentation::rmi { class StubFactoryFactoryStaticImpl; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::presentation::rmi::StubFactoryFactoryStaticImpl>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/presentation/rmi/StubFactoryFactoryStaticImpl";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::presentation::rmi::StubFactoryFactoryBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBFACTORYFACTORYSTATICIMPL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBFACTORYFACTORYSTATICIMPL)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBFACTORYFACTORYSTATICIMPL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/presentation/rmi/PresentationManager_StubFactory.h>
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/ClassLoader.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/rmi/CORBA/Tie.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::presentation::rmi::StubFactoryFactoryStaticImpl : public jni::object_base<"com/sun/corba/se/impl/presentation/rmi/StubFactoryFactoryStaticImpl",
	com::sun::corba::se::impl::presentation::rmi::StubFactoryFactoryBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::presentation::rmi::StubFactoryFactoryStaticImpl> new_object() { return base_::new_object(); }
	jni::ref<com::sun::corba::se::spi::presentation::rmi::PresentationManager_StubFactory> createStubFactory(jni::ref<java::lang::String> p1, jboolean p2, jni::ref<java::lang::String> p3, jni::ref<java::lang::Class> p4, jni::ref<java::lang::ClassLoader> p5) { return call_method<"createStubFactory", jni::ref<com::sun::corba::se::spi::presentation::rmi::PresentationManager_StubFactory>>(p1, p2, p3, p4, p5); }
	jni::ref<javax::rmi::CORBA::Tie> getTie(jni::ref<java::lang::Class> p1) { return call_method<"getTie", jni::ref<javax::rmi::CORBA::Tie>>(p1); }
	jboolean createsDynamicStubs() { return call_method<"createsDynamicStubs", jboolean>(); }

protected:

	StubFactoryFactoryStaticImpl(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_PRESENTATION_RMI_STUBFACTORYFACTORYSTATICIMPL
