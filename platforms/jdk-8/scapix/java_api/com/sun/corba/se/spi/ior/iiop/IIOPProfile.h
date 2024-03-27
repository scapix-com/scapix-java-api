// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/TaggedProfile.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior::iiop { class IIOPProfile; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::iiop::IIOPProfile>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/iiop/IIOPProfile";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::TaggedProfile>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/iiop/GIOPVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORBVersion.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::iiop::IIOPProfile : public jni::object_base<"com/sun/corba/se/spi/ior/iiop/IIOPProfile",
	java::lang::Object,
	com::sun::corba::se::spi::ior::TaggedProfile>
{
public:

	jni::ref<com::sun::corba::se::spi::orb::ORBVersion> getORBVersion() { return call_method<"getORBVersion", jni::ref<com::sun::corba::se::spi::orb::ORBVersion>>(); }
	jni::ref<java::lang::Object> getServant() { return call_method<"getServant", jni::ref<java::lang::Object>>(); }
	jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion> getGIOPVersion() { return call_method<"getGIOPVersion", jni::ref<com::sun::corba::se::spi::ior::iiop::GIOPVersion>>(); }
	jni::ref<java::lang::String> getCodebase() { return call_method<"getCodebase", jni::ref<java::lang::String>>(); }

protected:

	IIOPProfile(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_IIOP_IIOPPROFILE