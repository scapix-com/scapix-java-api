// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_JMOD_JMODFILE_SECTION_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_JMOD_JMODFILE_SECTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::jmod { class JmodFile_Section; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::jmod::JmodFile_Section>
{
	static constexpr fixed_string class_name = "jdk/internal/jmod/JmodFile$Section";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JMOD_JMODFILE_SECTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_JMOD_JMODFILE_SECTION)
#define SCAPIX_JAVA_API_JDK_INTERNAL_JMOD_JMODFILE_SECTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class jdk::internal::jmod::JmodFile_Section : public jni::object_base<"jdk/internal/jmod/JmodFile$Section",
	java::lang::Enum>
{
public:

	static jni::ref<jdk::internal::jmod::JmodFile_Section> CLASSES() { return get_static_field<"CLASSES", jni::ref<jdk::internal::jmod::JmodFile_Section>>(); }
	static jni::ref<jdk::internal::jmod::JmodFile_Section> CONFIG() { return get_static_field<"CONFIG", jni::ref<jdk::internal::jmod::JmodFile_Section>>(); }
	static jni::ref<jdk::internal::jmod::JmodFile_Section> HEADER_FILES() { return get_static_field<"HEADER_FILES", jni::ref<jdk::internal::jmod::JmodFile_Section>>(); }
	static jni::ref<jdk::internal::jmod::JmodFile_Section> LEGAL_NOTICES() { return get_static_field<"LEGAL_NOTICES", jni::ref<jdk::internal::jmod::JmodFile_Section>>(); }
	static jni::ref<jdk::internal::jmod::JmodFile_Section> MAN_PAGES() { return get_static_field<"MAN_PAGES", jni::ref<jdk::internal::jmod::JmodFile_Section>>(); }
	static jni::ref<jdk::internal::jmod::JmodFile_Section> NATIVE_LIBS() { return get_static_field<"NATIVE_LIBS", jni::ref<jdk::internal::jmod::JmodFile_Section>>(); }
	static jni::ref<jdk::internal::jmod::JmodFile_Section> NATIVE_CMDS() { return get_static_field<"NATIVE_CMDS", jni::ref<jdk::internal::jmod::JmodFile_Section>>(); }

	static jni::ref<jni::array<jdk::internal::jmod::JmodFile_Section>> values() { return call_static_method<"values", jni::ref<jni::array<jdk::internal::jmod::JmodFile_Section>>>(); }
	static jni::ref<jdk::internal::jmod::JmodFile_Section> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<jdk::internal::jmod::JmodFile_Section>>(name); }
	jni::ref<java::lang::String> jmodDir() { return call_method<"jmodDir", jni::ref<java::lang::String>>(); }

protected:

	JmodFile_Section(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_JMOD_JMODFILE_SECTION
