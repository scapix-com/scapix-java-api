// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/CharacterData.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATA01_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATA01_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class CharacterData01; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::CharacterData01>
{
	static constexpr fixed_string class_name = "java/lang/CharacterData01";
	using base_classes = std::tuple<scapix::java_api::java::lang::CharacterData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATA01_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATA01)
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATA01

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::CharacterData01 : public jni::object_base<"java/lang/CharacterData01",
	java::lang::CharacterData>
{
public:


protected:

	CharacterData01(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATA01
