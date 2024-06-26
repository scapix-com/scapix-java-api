// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectKeyTemplate.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_WIREOBJECTKEYTEMPLATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_WIREOBJECTKEYTEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class WireObjectKeyTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::WireObjectKeyTemplate>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/WireObjectKeyTemplate";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::com::sun::corba::se::spi::ior::ObjectKeyTemplate>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_WIREOBJECTKEYTEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_WIREOBJECTKEYTEMPLATE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_WIREOBJECTKEYTEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectAdapterId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORBVersion.h>
#include <scapix/java_api/com/sun/corba/se/spi/protocol/CorbaServerRequestDispatcher.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/OctetSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::WireObjectKeyTemplate : public jni::object_base<"com/sun/corba/se/impl/ior/WireObjectKeyTemplate",
	java::lang::Object,
	com::sun::corba::se::spi::ior::ObjectKeyTemplate>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	static jni::ref<com::sun::corba::se::impl::ior::WireObjectKeyTemplate> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::ior::WireObjectKeyTemplate> new_object(jni::ref<org::omg::CORBA_2_3::portable::InputStream> p1, jni::ref<org::omg::CORBA::OctetSeqHolder> p2) { return base_::new_object(p1, p2); }
	void write(jni::ref<com::sun::corba::se::spi::ior::ObjectId> p1, jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p2) { return call_method<"write", void>(p1, p2); }
	void write(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"write", void>(p1); }
	jint getSubcontractId() { return call_method<"getSubcontractId", jint>(); }
	jint getServerId() { return call_method<"getServerId", jint>(); }
	jni::ref<java::lang::String> getORBId() { return call_method<"getORBId", jni::ref<java::lang::String>>(); }
	jni::ref<com::sun::corba::se::spi::ior::ObjectAdapterId> getObjectAdapterId() { return call_method<"getObjectAdapterId", jni::ref<com::sun::corba::se::spi::ior::ObjectAdapterId>>(); }
	jni::ref<jni::array<jbyte>> getAdapterId() { return call_method<"getAdapterId", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<com::sun::corba::se::spi::orb::ORBVersion> getORBVersion() { return call_method<"getORBVersion", jni::ref<com::sun::corba::se::spi::orb::ORBVersion>>(); }
	jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher> getServerRequestDispatcher(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<com::sun::corba::se::spi::ior::ObjectId> p2) { return call_method<"getServerRequestDispatcher", jni::ref<com::sun::corba::se::spi::protocol::CorbaServerRequestDispatcher>>(p1, p2); }

protected:

	WireObjectKeyTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_WIREOBJECTKEYTEMPLATE
