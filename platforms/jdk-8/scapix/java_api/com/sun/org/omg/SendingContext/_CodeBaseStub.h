// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/org/omg/CORBA/portable/ObjectImpl.h>
#include <scapix/java_api/com/sun/org/omg/SendingContext/CodeBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASESTUB_FWD
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASESTUB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::org::omg::SendingContext { class _CodeBaseStub; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::org::omg::SendingContext::_CodeBaseStub>
{
	static constexpr fixed_string class_name = "com/sun/org/omg/SendingContext/_CodeBaseStub";
	using base_classes = std::tuple<scapix::java_api::org::omg::CORBA::portable::ObjectImpl, scapix::java_api::com::sun::org::omg::SendingContext::CodeBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASESTUB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASESTUB)
#define SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASESTUB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/org/omg/CORBA/Repository.h>
#include <scapix/java_api/com/sun/org/omg/CORBA/ValueDefPackage/FullValueDescription.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/omg/CORBA/portable/Delegate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::org::omg::SendingContext::_CodeBaseStub : public jni::object_base<"com/sun/org/omg/SendingContext/_CodeBaseStub",
	org::omg::CORBA::portable::ObjectImpl,
	com::sun::org::omg::SendingContext::CodeBase>
{
public:

	static jni::ref<com::sun::org::omg::SendingContext::_CodeBaseStub> new_object() { return base_::new_object(); }
	static jni::ref<com::sun::org::omg::SendingContext::_CodeBaseStub> new_object(jni::ref<org::omg::CORBA::portable::Delegate> p1) { return base_::new_object(p1); }
	jni::ref<com::sun::org::omg::CORBA::Repository> get_ir() { return call_method<"get_ir", jni::ref<com::sun::org::omg::CORBA::Repository>>(); }
	jni::ref<java::lang::String> implementation(jni::ref<java::lang::String> p1) { return call_method<"implementation", jni::ref<java::lang::String>>(p1); }
	jni::ref<jni::array<java::lang::String>> implementations(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"implementations", jni::ref<jni::array<java::lang::String>>>(p1); }
	jni::ref<com::sun::org::omg::CORBA::ValueDefPackage::FullValueDescription> meta(jni::ref<java::lang::String> p1) { return call_method<"meta", jni::ref<com::sun::org::omg::CORBA::ValueDefPackage::FullValueDescription>>(p1); }
	jni::ref<jni::array<com::sun::org::omg::CORBA::ValueDefPackage::FullValueDescription>> metas(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"metas", jni::ref<jni::array<com::sun::org::omg::CORBA::ValueDefPackage::FullValueDescription>>>(p1); }
	jni::ref<jni::array<java::lang::String>> bases(jni::ref<java::lang::String> p1) { return call_method<"bases", jni::ref<jni::array<java::lang::String>>>(p1); }
	jni::ref<jni::array<java::lang::String>> _ids() { return call_method<"_ids", jni::ref<jni::array<java::lang::String>>>(); }

protected:

	_CodeBaseStub(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_ORG_OMG_SENDINGCONTEXT__CODEBASESTUB