// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/ior/IdentifiableBase.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedComponent.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENTBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENTBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class TaggedComponentBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::TaggedComponentBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/TaggedComponentBase";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::ior::IdentifiableBase, scapix::java_api::com::sun::corba::se::spi::ior::TaggedComponent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENTBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENTBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENTBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/IOP/TaggedComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::TaggedComponentBase : public jni::object_base<"com/sun/corba/se/spi/ior/TaggedComponentBase",
	com::sun::corba::se::spi::ior::IdentifiableBase,
	com::sun::corba::se::spi::ior::TaggedComponent>
{
public:

	static jni::ref<com::sun::corba::se::spi::ior::TaggedComponentBase> new_object() { return base_::new_object(); }
	jni::ref<org::omg::IOP::TaggedComponent> getIOPComponent(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"getIOPComponent", jni::ref<org::omg::IOP::TaggedComponent>>(p1); }

protected:

	TaggedComponentBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENTBASE
