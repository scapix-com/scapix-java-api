// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/Writeable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEYTEMPLATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEYTEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class ObjectKeyTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::ObjectKeyTemplate>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/ObjectKeyTemplate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::Writeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEYTEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEYTEMPLATE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEYTEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectAdapterId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORBVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaServerRequestDispatcher.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::ObjectKeyTemplate : public jni::object_base<"com/sun/corba/se/spi/ior/ObjectKeyTemplate",
	java::lang::Object,
	com::sun::corba::se::spi::ior::Writeable>
{
public:

	jni::ref<com::sun::corba::se::spi::orb::ORBVersion> getORBVersion() { return call_method<"getORBVersion", jni::ref<com::sun::corba::se::spi::orb::ORBVersion>>(); }
	jint getSubcontractId() { return call_method<"getSubcontractId", jint>(); }
	jint getServerId() { return call_method<"getServerId", jint>(); }
	jni::ref<java::lang::String> getORBId() { return call_method<"getORBId", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectAdapterId> getObjectAdapterId() { return call_method<"getObjectAdapterId", jni::ref<com::sun::corba::se::spi::ior::ObjectAdapterId>>(); }
	jni::ref<jni::array<jbyte>> getAdapterId() { return call_method<"getAdapterId", jni::ref<jni::array<jbyte>>>(); }
	void write(jni::ref<com::sun::corba::se::spi::ior::ObjectId> p1, jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p2) { return call_method<"write", void>(p1, p2); }
	jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher> getServerRequestDispatcher(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::ior::ObjectId> p2) { return call_method<"getServerRequestDispatcher", jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>>(p1, p2); }

protected:

	ObjectKeyTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEYTEMPLATE
