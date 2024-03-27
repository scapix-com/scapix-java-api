// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/NewObjectKeyTemplateBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_JIDLOBJECTKEYTEMPLATE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_JIDLOBJECTKEYTEMPLATE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class JIDLObjectKeyTemplate; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::JIDLObjectKeyTemplate>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/JIDLObjectKeyTemplate";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::NewObjectKeyTemplateBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_JIDLOBJECTKEYTEMPLATE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_JIDLOBJECTKEYTEMPLATE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_JIDLOBJECTKEYTEMPLATE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/org/omg/CORBA/OctetSeqHolder.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/InputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::JIDLObjectKeyTemplate : public jni::object_base<"com/sun/corba/se/impl/ior/JIDLObjectKeyTemplate",
	com::sun::corba::se::impl::ior::NewObjectKeyTemplateBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::JIDLObjectKeyTemplate> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2, jint p3, jni::ref<org::omg::CORBA_2_3::portable::InputStream> p4) { return base_::new_object(p1, p2, p3, p4); }
	static jni::ref<com::sun::corba::se::impl::ior::JIDLObjectKeyTemplate> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2, jint p3, jni::ref<org::omg::CORBA_2_3::portable::InputStream> p4, jni::ref<org::omg::CORBA::OctetSeqHolder> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<com::sun::corba::se::impl::ior::JIDLObjectKeyTemplate> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2, jint p3) { return base_::new_object(p1, p2, p3); }

protected:

	JIDLObjectKeyTemplate(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_JIDLOBJECTKEYTEMPLATE
