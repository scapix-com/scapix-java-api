// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/impl/ior/ObjectKeyTemplateBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_NEWOBJECTKEYTEMPLATEBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_NEWOBJECTKEYTEMPLATEBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::ior { class NewObjectKeyTemplateBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::ior::NewObjectKeyTemplateBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/ior/NewObjectKeyTemplateBase";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::impl::ior::ObjectKeyTemplateBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_NEWOBJECTKEYTEMPLATEBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_NEWOBJECTKEYTEMPLATEBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_NEWOBJECTKEYTEMPLATEBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectAdapterId.h>
#include <scapix/java_api/com/sun/corba/se/spi/ior/ObjectId.h>
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA_2_3/portable/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::ior::NewObjectKeyTemplateBase : public jni::object_base<"com/sun/corba/se/impl/ior/NewObjectKeyTemplateBase",
	com::sun::corba::se::impl::ior::ObjectKeyTemplateBase>
{
public:

	static jni::ref<com::sun::corba::se::impl::ior::NewObjectKeyTemplateBase> new_object(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jint p2, jint p3, jint p4, jni::ref<java::lang::String> p5, jni::ref<com::sun::corba::se::spi::ior::ObjectAdapterId> p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	void write(jni::ref<com::sun::corba::se::spi::ior::ObjectId> p1, jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p2) { return call_method<"write", void>(p1, p2); }
	void write(jni::ref<org::omg::CORBA_2_3::portable::OutputStream> p1) { return call_method<"write", void>(p1); }

protected:

	NewObjectKeyTemplateBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_IOR_NEWOBJECTKEYTEMPLATEBASE