// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/invoke/ClassSpecializer_SpeciesData.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIESDATA_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIESDATA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::invoke { class BoundMethodHandle_SpeciesData; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::invoke::BoundMethodHandle_SpeciesData>
{
	static constexpr fixed_string class_name = "java/lang/invoke/BoundMethodHandle$SpeciesData";
	using base_classes = std::tuple<scapix::java_api::java::lang::invoke::ClassSpecializer_SpeciesData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIESDATA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIESDATA)
#define SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIESDATA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/invoke/BoundMethodHandle_Specializer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::invoke::BoundMethodHandle_SpeciesData : public jni::object_base<"java/lang/invoke/BoundMethodHandle$SpeciesData",
	java::lang::invoke::ClassSpecializer_SpeciesData>
{
public:

	static jni::ref<java::lang::invoke::BoundMethodHandle_SpeciesData> new_object(jni::ref<java::lang::invoke::BoundMethodHandle_Specializer> outer, jni::ref<java::lang::String> key) { return base_::new_object(outer, key); }

protected:

	BoundMethodHandle_SpeciesData(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_INVOKE_BOUNDMETHODHANDLE_SPECIESDATA
