// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/com/sun/corba/se/spi/logging/LogWrapperBase.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_ACTIVATIONSYSTEMEXCEPTION_FWD
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_ACTIVATIONSYSTEMEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::corba::se::impl::logging { class ActivationSystemException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::corba::se::impl::logging::ActivationSystemException>
{
	static constexpr fixed_string class_name = "com/sun/corba/se/impl/logging/ActivationSystemException";
	using base_classes = std::tuple<scapix::java_api::com::sun::corba::se::spi::logging::LogWrapperBase>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_ACTIVATIONSYSTEMEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_ACTIVATIONSYSTEMEXCEPTION)
#define SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_ACTIVATIONSYSTEMEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/com/sun/corba/se/spi/orb/ORB.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#include <scapix/java_api/java/util/logging/Logger.h>
#include <scapix/java_api/org/omg/CORBA/CompletionStatus.h>
#include <scapix/java_api/org/omg/CORBA/INITIALIZE.h>
#include <scapix/java_api/org/omg/CORBA/INTERNAL.h>
#include <scapix/java_api/org/omg/CORBA/OBJECT_NOT_EXIST.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::corba::se::impl::logging::ActivationSystemException : public jni::object_base<"com/sun/corba/se/impl/logging/ActivationSystemException",
	com::sun::corba::se::spi::logging::LogWrapperBase>
{
public:

	static jint CANNOT_READ_REPOSITORY_DB() { return get_static_field<"CANNOT_READ_REPOSITORY_DB", jint>(); }
	static jint CANNOT_ADD_INITIAL_NAMING() { return get_static_field<"CANNOT_ADD_INITIAL_NAMING", jint>(); }
	static jint CANNOT_WRITE_REPOSITORY_DB() { return get_static_field<"CANNOT_WRITE_REPOSITORY_DB", jint>(); }
	static jint SERVER_NOT_EXPECTED_TO_REGISTER() { return get_static_field<"SERVER_NOT_EXPECTED_TO_REGISTER", jint>(); }
	static jint UNABLE_TO_START_PROCESS() { return get_static_field<"UNABLE_TO_START_PROCESS", jint>(); }
	static jint SERVER_NOT_RUNNING() { return get_static_field<"SERVER_NOT_RUNNING", jint>(); }
	static jint ERROR_IN_BAD_SERVER_ID_HANDLER() { return get_static_field<"ERROR_IN_BAD_SERVER_ID_HANDLER", jint>(); }

	static jni::ref<com::sun::corba::se::impl::logging::ActivationSystemException> new_object(jni::ref<java::util::logging::Logger> p1) { return base_::new_object(p1); }
	static jni::ref<com::sun::corba::se::impl::logging::ActivationSystemException> get(jni::ref<com::sun::corba::se::spi::orb::ORB> p1, jni::ref<java::lang::String> p2) { return call_static_method<"get", jni::ref<com::sun::corba::se::impl::logging::ActivationSystemException>>(p1, p2); }
	static jni::ref<com::sun::corba::se::impl::logging::ActivationSystemException> get(jni::ref<java::lang::String> p1) { return call_static_method<"get", jni::ref<com::sun::corba::se::impl::logging::ActivationSystemException>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotReadRepositoryDb(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"cannotReadRepositoryDb", jni::ref<org::omg::CORBA::INITIALIZE>>(p1, p2); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotReadRepositoryDb(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"cannotReadRepositoryDb", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotReadRepositoryDb(jni::ref<java::lang::Throwable> p1) { return call_method<"cannotReadRepositoryDb", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotReadRepositoryDb() { return call_method<"cannotReadRepositoryDb", jni::ref<org::omg::CORBA::INITIALIZE>>(); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotAddInitialNaming(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"cannotAddInitialNaming", jni::ref<org::omg::CORBA::INITIALIZE>>(p1, p2); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotAddInitialNaming(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"cannotAddInitialNaming", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotAddInitialNaming(jni::ref<java::lang::Throwable> p1) { return call_method<"cannotAddInitialNaming", jni::ref<org::omg::CORBA::INITIALIZE>>(p1); }
	jni::ref<org::omg::CORBA::INITIALIZE> cannotAddInitialNaming() { return call_method<"cannotAddInitialNaming", jni::ref<org::omg::CORBA::INITIALIZE>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> cannotWriteRepositoryDb(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"cannotWriteRepositoryDb", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> cannotWriteRepositoryDb(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"cannotWriteRepositoryDb", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> cannotWriteRepositoryDb(jni::ref<java::lang::Throwable> p1) { return call_method<"cannotWriteRepositoryDb", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> cannotWriteRepositoryDb() { return call_method<"cannotWriteRepositoryDb", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotExpectedToRegister(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"serverNotExpectedToRegister", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotExpectedToRegister(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"serverNotExpectedToRegister", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotExpectedToRegister(jni::ref<java::lang::Throwable> p1) { return call_method<"serverNotExpectedToRegister", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotExpectedToRegister() { return call_method<"serverNotExpectedToRegister", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> unableToStartProcess(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"unableToStartProcess", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> unableToStartProcess(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"unableToStartProcess", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> unableToStartProcess(jni::ref<java::lang::Throwable> p1) { return call_method<"unableToStartProcess", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> unableToStartProcess() { return call_method<"unableToStartProcess", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotRunning(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"serverNotRunning", jni::ref<org::omg::CORBA::INTERNAL>>(p1, p2); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotRunning(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"serverNotRunning", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotRunning(jni::ref<java::lang::Throwable> p1) { return call_method<"serverNotRunning", jni::ref<org::omg::CORBA::INTERNAL>>(p1); }
	jni::ref<org::omg::CORBA::INTERNAL> serverNotRunning() { return call_method<"serverNotRunning", jni::ref<org::omg::CORBA::INTERNAL>>(); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> errorInBadServerIdHandler(jni::ref<org::omg::CORBA::CompletionStatus> p1, jni::ref<java::lang::Throwable> p2) { return call_method<"errorInBadServerIdHandler", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(p1, p2); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> errorInBadServerIdHandler(jni::ref<org::omg::CORBA::CompletionStatus> p1) { return call_method<"errorInBadServerIdHandler", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(p1); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> errorInBadServerIdHandler(jni::ref<java::lang::Throwable> p1) { return call_method<"errorInBadServerIdHandler", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(p1); }
	jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST> errorInBadServerIdHandler() { return call_method<"errorInBadServerIdHandler", jni::ref<org::omg::CORBA::OBJECT_NOT_EXIST>>(); }

protected:

	ActivationSystemException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_CORBA_SE_IMPL_LOGGING_ACTIVATIONSYSTEMEXCEPTION