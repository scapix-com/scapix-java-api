// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_STATEENGINE_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_STATEENGINE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::spi::orbutil::fsm { class StateEngine; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::spi::orbutil::fsm::StateEngine>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/spi/orbutil/fsm/StateEngine";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_STATEENGINE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_STATEENGINE)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_STATEENGINE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/Action.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/FSM.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/Guard.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/Input.h>
#include <scapix/java_api/com/sun/corba/se/spi/orbutil/fsm/State.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::spi::orbutil::fsm::StateEngine : public jni::object_base<"com/sun/corba/se/spi/orbutil/fsm/StateEngine",
	java::lang::Object>
{
public:

	jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine> add(jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p1, jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> p2, jni::ref<com::sun::corba::se::spi::orbutil::fsm::Guard> p3, jni::ref<com::sun::corba::se::spi::orbutil::fsm::Action> p4, jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p5) { return call_method<"add", jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine>>(p1, p2, p3, p4, p5); }
	jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine> add(jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p1, jni::ref<com::sun::corba::se::spi::orbutil::fsm::Input> p2, jni::ref<com::sun::corba::se::spi::orbutil::fsm::Action> p3, jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p4) { return call_method<"add", jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine>>(p1, p2, p3, p4); }
	jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine> setDefault(jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p1, jni::ref<com::sun::corba::se::spi::orbutil::fsm::Action> p2, jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p3) { return call_method<"setDefault", jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine>>(p1, p2, p3); }
	jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine> setDefault(jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p1, jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p2) { return call_method<"setDefault", jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine>>(p1, p2); }
	jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine> setDefault(jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p1) { return call_method<"setDefault", jni::ref<com::sun::corba::se::spi::orbutil::fsm::StateEngine>>(p1); }
	void setDefaultAction(jni::ref<com::sun::corba::se::spi::orbutil::fsm::Action> p1) { return call_method<"setDefaultAction", void>(p1); }
	void done() { return call_method<"done", void>(); }
	jni::ref<com::sun::corba::se::spi::orbutil::fsm::FSM> makeFSM(jni::ref<com::sun::corba::se::spi::orbutil::fsm::State> p1) { return call_method<"makeFSM", jni::ref<com::sun::corba::se::spi::orbutil::fsm::FSM>>(p1); }

protected:

	StateEngine(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_SPI_ORBUTIL_FSM_STATEENGINE