// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/Identifiable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENT_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class TaggedComponent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::TaggedComponent>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/TaggedComponent";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::Identifiable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENT)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#include <scapix/java_api/org/omg/IOP/TaggedComponent.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::TaggedComponent : public jni::object_base<"com/sun/corba/se/spi/ior/TaggedComponent",
	java::lang::Object,
	com::sun::corba::se::spi::ior::Identifiable>
{
public:

	jni::ref<org::omg::IOP::TaggedComponent> getIOPComponent(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"getIOPComponent", jni::ref<org::omg::IOP::TaggedComponent>>(p1); }

protected:

	TaggedComponent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_TAGGEDCOMPONENT
