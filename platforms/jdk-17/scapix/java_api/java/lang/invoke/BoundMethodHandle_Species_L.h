// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/BoundMethodHandle.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIES_L_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIES_L_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class BoundMethodHandle_Species_L; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::BoundMethodHandle_Species_L>
{
	static constexpr fixed_string class_name = "java/lang/invoke/BoundMethodHandle$Species_L";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::BoundMethodHandle>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIES_L_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIES_L)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIES_L

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::BoundMethodHandle_Species_L : public jni::object_base<"java/lang/invoke/BoundMethodHandle$Species_L",
	java::lang::invoke::BoundMethodHandle>
{
public:


protected:

	BoundMethodHandle_Species_L(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIES_L
