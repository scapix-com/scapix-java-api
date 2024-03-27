// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_FSM_NAMEBASE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_FSM_NAMEBASE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::orbutil::fsm { class NameBase; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::orbutil::fsm::NameBase>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/orbutil/fsm/NameBase";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_FSM_NAMEBASE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_FSM_NAMEBASE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_FSM_NAMEBASE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::orbutil::fsm::NameBase : public jni::object_base<"com/sun/corba/se/impl/orbutil/fsm/NameBase",
	java::lang::Object>
{
public:

	static jni::ref<com::sun::corba::se::impl::orbutil::fsm::NameBase> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	jni::ref<java::lang::String> getName() { return call_method<"getName", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	NameBase(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_ORBUTIL_FSM_NAMEBASE
