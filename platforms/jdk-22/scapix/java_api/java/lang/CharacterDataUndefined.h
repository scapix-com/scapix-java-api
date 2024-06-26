// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/CharacterData.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATAUNDEFINED_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATAUNDEFINED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class CharacterDataUndefined; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::CharacterDataUndefined>
{
	static constexpr fixed_string class_name = "java/lang/CharacterDataUndefined";
	using base_classes = std::tuple<scapix::java_api::java::lang::CharacterData>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATAUNDEFINED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATAUNDEFINED)
#define SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATAUNDEFINED

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::CharacterDataUndefined : public jni::object_base<"java/lang/CharacterDataUndefined",
	java::lang::CharacterData>
{
public:


protected:

	CharacterDataUndefined(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_CHARACTERDATAUNDEFINED
