/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkAnimationCueWrap.h"
#include "vtkAnimationSceneWrap.h"
#include "vtkObjectWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::FunctionTemplate> VtkAnimationSceneWrap::ptpl;

VtkAnimationSceneWrap::VtkAnimationSceneWrap()
{ }

VtkAnimationSceneWrap::VtkAnimationSceneWrap(vtkSmartPointer<vtkAnimationScene> _native)
{ native = _native; }

VtkAnimationSceneWrap::~VtkAnimationSceneWrap()
{ }

void VtkAnimationSceneWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::SetAccessor(exports, Nan::New("vtkAnimationScene").ToLocalChecked(), ConstructorGetter);
	Nan::SetAccessor(exports, Nan::New("AnimationScene").ToLocalChecked(), ConstructorGetter);
}

void VtkAnimationSceneWrap::ConstructorGetter(
	v8::Local<v8::String> property,
	const Nan::PropertyCallbackInfo<v8::Value>& info)
{
	InitPtpl();
	info.GetReturnValue().Set(Nan::New(ptpl)->GetFunction());
}

void VtkAnimationSceneWrap::InitPtpl()
{
	if (!ptpl.IsEmpty()) return;
	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	VtkAnimationCueWrap::InitPtpl( );
	tpl->Inherit(Nan::New<FunctionTemplate>(VtkAnimationCueWrap::ptpl));
	tpl->SetClassName(Nan::New("VtkAnimationSceneWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	Nan::SetPrototypeMethod(tpl, "AddCue", AddCue);
	Nan::SetPrototypeMethod(tpl, "addCue", AddCue);

	Nan::SetPrototypeMethod(tpl, "GetAnimationTime", GetAnimationTime);
	Nan::SetPrototypeMethod(tpl, "getAnimationTime", GetAnimationTime);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetFrameRate", GetFrameRate);
	Nan::SetPrototypeMethod(tpl, "getFrameRate", GetFrameRate);

	Nan::SetPrototypeMethod(tpl, "GetLoop", GetLoop);
	Nan::SetPrototypeMethod(tpl, "getLoop", GetLoop);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfCues", GetNumberOfCues);
	Nan::SetPrototypeMethod(tpl, "getNumberOfCues", GetNumberOfCues);

	Nan::SetPrototypeMethod(tpl, "GetPlayMode", GetPlayMode);
	Nan::SetPrototypeMethod(tpl, "getPlayMode", GetPlayMode);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "IsInPlay", IsInPlay);
	Nan::SetPrototypeMethod(tpl, "isInPlay", IsInPlay);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "Play", Play);
	Nan::SetPrototypeMethod(tpl, "play", Play);

	Nan::SetPrototypeMethod(tpl, "RemoveAllCues", RemoveAllCues);
	Nan::SetPrototypeMethod(tpl, "removeAllCues", RemoveAllCues);

	Nan::SetPrototypeMethod(tpl, "RemoveCue", RemoveCue);
	Nan::SetPrototypeMethod(tpl, "removeCue", RemoveCue);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetAnimationTime", SetAnimationTime);
	Nan::SetPrototypeMethod(tpl, "setAnimationTime", SetAnimationTime);

	Nan::SetPrototypeMethod(tpl, "SetFrameRate", SetFrameRate);
	Nan::SetPrototypeMethod(tpl, "setFrameRate", SetFrameRate);

	Nan::SetPrototypeMethod(tpl, "SetLoop", SetLoop);
	Nan::SetPrototypeMethod(tpl, "setLoop", SetLoop);

	Nan::SetPrototypeMethod(tpl, "SetModeToRealTime", SetModeToRealTime);
	Nan::SetPrototypeMethod(tpl, "setModeToRealTime", SetModeToRealTime);

	Nan::SetPrototypeMethod(tpl, "SetModeToSequence", SetModeToSequence);
	Nan::SetPrototypeMethod(tpl, "setModeToSequence", SetModeToSequence);

	Nan::SetPrototypeMethod(tpl, "SetPlayMode", SetPlayMode);
	Nan::SetPrototypeMethod(tpl, "setPlayMode", SetPlayMode);

	Nan::SetPrototypeMethod(tpl, "SetTimeMode", SetTimeMode);
	Nan::SetPrototypeMethod(tpl, "setTimeMode", SetTimeMode);

	Nan::SetPrototypeMethod(tpl, "Stop", Stop);
	Nan::SetPrototypeMethod(tpl, "stop", Stop);

	ptpl.Reset( tpl );
}

void VtkAnimationSceneWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkAnimationScene> native = vtkSmartPointer<vtkAnimationScene>::New();
		VtkAnimationSceneWrap* obj = new VtkAnimationSceneWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkAnimationSceneWrap::AddCue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAnimationCueWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAnimationCueWrap *a0 = ObjectWrap::Unwrap<VtkAnimationCueWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->AddCue(
			(vtkAnimationCue *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::GetAnimationTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetAnimationTime();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAnimationSceneWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkAnimationSceneWrap::GetFrameRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetFrameRate();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAnimationSceneWrap::GetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLoop();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAnimationSceneWrap::GetNumberOfCues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfCues();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAnimationSceneWrap::GetPlayMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetPlayMode();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAnimationSceneWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsString())
	{
		Nan::Utf8String a0(info[0]);
		int r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->IsA(
			*a0
		);
		info.GetReturnValue().Set(Nan::New(r));
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::IsInPlay(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->IsInPlay();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkAnimationSceneWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	vtkAnimationScene * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
		VtkAnimationSceneWrap::InitPtpl();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::FunctionTemplate>(VtkAnimationSceneWrap::ptpl)->GetFunction();
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkAnimationSceneWrap *w = new VtkAnimationSceneWrap();
	w->native = r;
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkAnimationSceneWrap::Play(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Play();
}

void VtkAnimationSceneWrap::RemoveAllCues(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->RemoveAllCues();
}

void VtkAnimationSceneWrap::RemoveCue(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkAnimationCueWrap::ptpl))->HasInstance(info[0]))
	{
		VtkAnimationCueWrap *a0 = ObjectWrap::Unwrap<VtkAnimationCueWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->RemoveCue(
			(vtkAnimationCue *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject() && (Nan::New(VtkObjectWrap::ptpl))->HasInstance(info[0]))
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkAnimationScene * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
			VtkAnimationSceneWrap::InitPtpl();
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::FunctionTemplate>(VtkAnimationSceneWrap::ptpl)->GetFunction();
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkAnimationSceneWrap *w = new VtkAnimationSceneWrap();
		w->native = r;
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::SetAnimationTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetAnimationTime(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::SetFrameRate(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetFrameRate(
			info[0]->NumberValue()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::SetLoop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLoop(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::SetModeToRealTime(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetModeToRealTime();
}

void VtkAnimationSceneWrap::SetModeToSequence(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->SetModeToSequence();
}

void VtkAnimationSceneWrap::SetPlayMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetPlayMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::SetTimeMode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetTimeMode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkAnimationSceneWrap::Stop(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkAnimationSceneWrap *wrapper = ObjectWrap::Unwrap<VtkAnimationSceneWrap>(info.Holder());
	vtkAnimationScene *native = (vtkAnimationScene *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->Stop();
}
