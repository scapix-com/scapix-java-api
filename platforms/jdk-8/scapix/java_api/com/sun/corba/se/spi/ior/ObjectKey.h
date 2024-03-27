// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/Writeable.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEY_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::ior { class ObjectKey; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::ior::ObjectKey>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/ior/ObjectKey";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::Writeable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEY)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaServerRequestDispatcher.h>
#include <scapix/java_api/org/omg/CORBA/ORB.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::ior::ObjectKey : public jni::object_base<"com/sun/corba/se/spi/ior/ObjectKey",
	java::lang::Object,
	com::sun::corba::se::spi::ior::Writeable>
{
public:

	jni::ref<com::sun::corba::se::spi::ior::ObjectId> getId() { return call_method<"getId", jni::ref<com::sun::corba::se::spi::ior::ObjectId>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate> getTemplate() { return call_method<"getTemplate", jni::ref<com::sun::corba::se::spi::ior::ObjectKeyTemplate>>(); }
	jni::ref<jni::array<jbyte>> getBytes(jni::ref<org::omg::CORBA::ORB> p1) { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(p1); }
	jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher> getServerRequestDispatcher(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return call_method<"getServerRequestDispatcher", jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>>(p1); }

protected:

	ObjectKey(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_IOR_OBJECTKEY