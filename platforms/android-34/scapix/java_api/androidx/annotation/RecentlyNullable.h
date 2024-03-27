// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_ANDROIDX_ANNOTATION_RECENTLYNULLABLE_FWD
#define SCAPIX_JAVA_API_ANDROIDX_ANNOTATION_RECENTLYNULLABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::androidx::annotation { class RecentlyNullable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::androidx::annotation::RecentlyNullable>
{
	static constexpr fixed_string class_name = "androidx/annotation/RecentlyNullable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROIDX_ANNOTATION_RECENTLYNULLABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROIDX_ANNOTATION_RECENTLYNULLABLE)
#define SCAPIX_JAVA_API_ANDROIDX_ANNOTATION_RECENTLYNULLABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class androidx::annotation::RecentlyNullable : public jni::object_base<"androidx/annotation/RecentlyNullable",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:


protected:

	RecentlyNullable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROIDX_ANNOTATION_RECENTLYNULLABLE
