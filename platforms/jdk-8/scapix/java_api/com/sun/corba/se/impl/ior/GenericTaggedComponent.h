// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/GenericIdentifiable.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedComponent.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDCOMPONENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class GenericTaggedComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::GenericTaggedComponent>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/GenericTaggedComponent";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::GenericIdentifiable, scapix::java_api::com::sun::corba::se::spi::ior::TaggedComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDCOMPONENT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#include <scapix/java_api/org/omg/IOP/TaggedComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::GenericTaggedComponent : public jni::object_base<"com/sun/corba/se/impl/ior/GenericTaggedComponent",
	com::sun::corba::se::impl::ior::GenericIdentifiable,
	com::sun::corba::se::spi::ior::TaggedComponent>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::GenericTaggedComponent> new_object(jint p1, jni::ref<org::omg::CORBA_2_3::portable::InputStream> p2) { return base_::new_object(p1, p2); }
	static jni::ref<com::sun::corba::se::impl::ior::GenericTaggedComponent> new_object(jint p1, jni::ref<jni::array<jbyte>> p2) { return base_::new_object(p1, p2); }
	jni::ref<org::omg::IOP::TaggedComponent> getIOPComponent(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"getIOPComponent", jni::ref<org::omg::IOP::TaggedComponent>>(p1); }

protected:

	GenericTaggedComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_GENERICTAGGEDCOMPONENT