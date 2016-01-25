/* this file has been autogenerated by vtkNodeJsWrap */
/* editing this might proof futile */

#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include <nan.h>


#include "vtkObjectWrap.h"
#include "vtkKdNodeWrap.h"
#include "vtkPlanesIntersectionWrap.h"

using namespace v8;

extern Nan::Persistent<v8::Object> vtkNodeJsNoWrap;
Nan::Persistent<v8::Function> VtkKdNodeWrap::constructor;

VtkKdNodeWrap::VtkKdNodeWrap()
{ }

VtkKdNodeWrap::VtkKdNodeWrap(vtkSmartPointer<vtkKdNode> _native)
{ native = _native; }

VtkKdNodeWrap::~VtkKdNodeWrap()
{ }

void VtkKdNodeWrap::Init(v8::Local<v8::Object> exports)
{
	Nan::HandleScope scope;

	v8::Local<v8::FunctionTemplate> tpl = Nan::New<v8::FunctionTemplate>(New);
	tpl->SetClassName(Nan::New("VtkKdNodeWrap").ToLocalChecked());
	tpl->InstanceTemplate()->SetInternalFieldCount(1);

	VtkObjectBaseWrap::InitTpl(tpl);
	VtkObjectWrap::InitTpl(tpl);
	InitTpl(tpl);

	constructor.Reset( tpl->GetFunction() );

	exports->Set(Nan::New("vtkKdNode").ToLocalChecked(),tpl->GetFunction());
	exports->Set(Nan::New("KdNode").ToLocalChecked(),tpl->GetFunction());
}

void VtkKdNodeWrap::InitTpl(v8::Local<v8::FunctionTemplate> tpl)
{
	Nan::SetPrototypeMethod(tpl, "AddChildNodes", AddChildNodes);
	Nan::SetPrototypeMethod(tpl, "addChildNodes", AddChildNodes);

	Nan::SetPrototypeMethod(tpl, "ContainsBox", ContainsBox);
	Nan::SetPrototypeMethod(tpl, "containsBox", ContainsBox);

	Nan::SetPrototypeMethod(tpl, "ContainsPoint", ContainsPoint);
	Nan::SetPrototypeMethod(tpl, "containsPoint", ContainsPoint);

	Nan::SetPrototypeMethod(tpl, "DeleteChildNodes", DeleteChildNodes);
	Nan::SetPrototypeMethod(tpl, "deleteChildNodes", DeleteChildNodes);

	Nan::SetPrototypeMethod(tpl, "GetClassName", GetClassName);
	Nan::SetPrototypeMethod(tpl, "getClassName", GetClassName);

	Nan::SetPrototypeMethod(tpl, "GetDim", GetDim);
	Nan::SetPrototypeMethod(tpl, "getDim", GetDim);

	Nan::SetPrototypeMethod(tpl, "GetDistance2ToBoundary", GetDistance2ToBoundary);
	Nan::SetPrototypeMethod(tpl, "getDistance2ToBoundary", GetDistance2ToBoundary);

	Nan::SetPrototypeMethod(tpl, "GetDistance2ToInnerBoundary", GetDistance2ToInnerBoundary);
	Nan::SetPrototypeMethod(tpl, "getDistance2ToInnerBoundary", GetDistance2ToInnerBoundary);

	Nan::SetPrototypeMethod(tpl, "GetDivisionPosition", GetDivisionPosition);
	Nan::SetPrototypeMethod(tpl, "getDivisionPosition", GetDivisionPosition);

	Nan::SetPrototypeMethod(tpl, "GetID", GetID);
	Nan::SetPrototypeMethod(tpl, "getID", GetID);

	Nan::SetPrototypeMethod(tpl, "GetLeft", GetLeft);
	Nan::SetPrototypeMethod(tpl, "getLeft", GetLeft);

	Nan::SetPrototypeMethod(tpl, "GetMaxID", GetMaxID);
	Nan::SetPrototypeMethod(tpl, "getMaxID", GetMaxID);

	Nan::SetPrototypeMethod(tpl, "GetMinID", GetMinID);
	Nan::SetPrototypeMethod(tpl, "getMinID", GetMinID);

	Nan::SetPrototypeMethod(tpl, "GetNumberOfPoints", GetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "getNumberOfPoints", GetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "GetRight", GetRight);
	Nan::SetPrototypeMethod(tpl, "getRight", GetRight);

	Nan::SetPrototypeMethod(tpl, "GetUp", GetUp);
	Nan::SetPrototypeMethod(tpl, "getUp", GetUp);

	Nan::SetPrototypeMethod(tpl, "IntersectsBox", IntersectsBox);
	Nan::SetPrototypeMethod(tpl, "intersectsBox", IntersectsBox);

	Nan::SetPrototypeMethod(tpl, "IntersectsRegion", IntersectsRegion);
	Nan::SetPrototypeMethod(tpl, "intersectsRegion", IntersectsRegion);

	Nan::SetPrototypeMethod(tpl, "IntersectsSphere2", IntersectsSphere2);
	Nan::SetPrototypeMethod(tpl, "intersectsSphere2", IntersectsSphere2);

	Nan::SetPrototypeMethod(tpl, "IsA", IsA);
	Nan::SetPrototypeMethod(tpl, "isA", IsA);

	Nan::SetPrototypeMethod(tpl, "NewInstance", NewInstance);
	Nan::SetPrototypeMethod(tpl, "newInstance", NewInstance);

	Nan::SetPrototypeMethod(tpl, "PrintNode", PrintNode);
	Nan::SetPrototypeMethod(tpl, "printNode", PrintNode);

	Nan::SetPrototypeMethod(tpl, "PrintVerboseNode", PrintVerboseNode);
	Nan::SetPrototypeMethod(tpl, "printVerboseNode", PrintVerboseNode);

	Nan::SetPrototypeMethod(tpl, "SafeDownCast", SafeDownCast);
	Nan::SetPrototypeMethod(tpl, "safeDownCast", SafeDownCast);

	Nan::SetPrototypeMethod(tpl, "SetBounds", SetBounds);
	Nan::SetPrototypeMethod(tpl, "setBounds", SetBounds);

	Nan::SetPrototypeMethod(tpl, "SetDataBounds", SetDataBounds);
	Nan::SetPrototypeMethod(tpl, "setDataBounds", SetDataBounds);

	Nan::SetPrototypeMethod(tpl, "SetDim", SetDim);
	Nan::SetPrototypeMethod(tpl, "setDim", SetDim);

	Nan::SetPrototypeMethod(tpl, "SetID", SetID);
	Nan::SetPrototypeMethod(tpl, "setID", SetID);

	Nan::SetPrototypeMethod(tpl, "SetLeft", SetLeft);
	Nan::SetPrototypeMethod(tpl, "setLeft", SetLeft);

	Nan::SetPrototypeMethod(tpl, "SetMaxID", SetMaxID);
	Nan::SetPrototypeMethod(tpl, "setMaxID", SetMaxID);

	Nan::SetPrototypeMethod(tpl, "SetMinID", SetMinID);
	Nan::SetPrototypeMethod(tpl, "setMinID", SetMinID);

	Nan::SetPrototypeMethod(tpl, "SetNumberOfPoints", SetNumberOfPoints);
	Nan::SetPrototypeMethod(tpl, "setNumberOfPoints", SetNumberOfPoints);

	Nan::SetPrototypeMethod(tpl, "SetRight", SetRight);
	Nan::SetPrototypeMethod(tpl, "setRight", SetRight);

	Nan::SetPrototypeMethod(tpl, "SetUp", SetUp);
	Nan::SetPrototypeMethod(tpl, "setUp", SetUp);

}

void VtkKdNodeWrap::New(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	if(!info.IsConstructCall())
	{
		Nan::ThrowError("Constructor not called in a construct call.");
		return;
	}

	if(info.Length() == 0)
	{
		vtkSmartPointer<vtkKdNode> native = vtkSmartPointer<vtkKdNode>::New();
		VtkKdNodeWrap* obj = new VtkKdNodeWrap(native);		obj->Wrap(info.This());
	}
	else
	{
		Nan::Utf8String s(info[0]);
		if(info[0]->ToObject() != vtkNodeJsNoWrap )
			Nan::ThrowError("Parameter Error");
	}

	info.GetReturnValue().Set(info.This());
}

void VtkKdNodeWrap::AddChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkKdNodeWrap *a0 = ObjectWrap::Unwrap<VtkKdNodeWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsObject())
		{
			VtkKdNodeWrap *a1 = ObjectWrap::Unwrap<VtkKdNodeWrap>(info[1]->ToObject());
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			native->AddChildNodes(
				(vtkKdNode *) a0->native.GetPointer(),
				(vtkKdNode *) a1->native.GetPointer()
			);
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::ContainsBox(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								int r;
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								r = native->ContainsBox(
									info[0]->NumberValue(),
									info[1]->NumberValue(),
									info[2]->NumberValue(),
									info[3]->NumberValue(),
									info[4]->NumberValue(),
									info[5]->NumberValue(),
									info[6]->Int32Value()
								);
								info.GetReturnValue().Set(Nan::New(r));
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::ContainsPoint(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					int r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->ContainsPoint(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::DeleteChildNodes(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	native->DeleteChildNodes();
}

void VtkKdNodeWrap::GetClassName(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	char const * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetClassName();
	info.GetReturnValue().Set(Nan::New(r).ToLocalChecked());
}

void VtkKdNodeWrap::GetDim(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDim();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdNodeWrap::GetDistance2ToBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsInt32())
				{
					double r;
					if(info.Length() != 4)
					{
						Nan::ThrowError("Too many parameters.");
						return;
					}
					r = native->GetDistance2ToBoundary(
						info[0]->NumberValue(),
						info[1]->NumberValue(),
						info[2]->NumberValue(),
						info[3]->Int32Value()
					);
					info.GetReturnValue().Set(Nan::New(r));
					return;
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::GetDistance2ToInnerBoundary(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				double r;
				if(info.Length() != 3)
				{
					Nan::ThrowError("Too many parameters.");
					return;
				}
				r = native->GetDistance2ToInnerBoundary(
					info[0]->NumberValue(),
					info[1]->NumberValue(),
					info[2]->NumberValue()
				);
				info.GetReturnValue().Set(Nan::New(r));
				return;
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::GetDivisionPosition(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	double r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetDivisionPosition();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdNodeWrap::GetID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdNodeWrap::GetLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	vtkKdNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetLeft();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkKdNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKdNodeWrap *w = new VtkKdNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKdNodeWrap::GetMaxID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMaxID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdNodeWrap::GetMinID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetMinID();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdNodeWrap::GetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	int r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetNumberOfPoints();
	info.GetReturnValue().Set(Nan::New(r));
}

void VtkKdNodeWrap::GetRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	vtkKdNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetRight();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkKdNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKdNodeWrap *w = new VtkKdNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKdNodeWrap::GetUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	vtkKdNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->GetUp();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkKdNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKdNodeWrap *w = new VtkKdNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKdNodeWrap::IntersectsBox(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() > 6 && info[6]->IsInt32())
							{
								int r;
								if(info.Length() != 7)
								{
									Nan::ThrowError("Too many parameters.");
									return;
								}
								r = native->IntersectsBox(
									info[0]->NumberValue(),
									info[1]->NumberValue(),
									info[2]->NumberValue(),
									info[3]->NumberValue(),
									info[4]->NumberValue(),
									info[5]->NumberValue(),
									info[6]->Int32Value()
								);
								info.GetReturnValue().Set(Nan::New(r));
								return;
							}
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::IntersectsRegion(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkPlanesIntersectionWrap *a0 = ObjectWrap::Unwrap<VtkPlanesIntersectionWrap>(info[0]->ToObject());
		if(info.Length() > 1 && info[1]->IsInt32())
		{
			int r;
			if(info.Length() != 2)
			{
				Nan::ThrowError("Too many parameters.");
				return;
			}
			r = native->IntersectsRegion(
				(vtkPlanesIntersection *) a0->native.GetPointer(),
				info[1]->Int32Value()
			);
			info.GetReturnValue().Set(Nan::New(r));
			return;
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::IntersectsSphere2(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsInt32())
					{
						int r;
						if(info.Length() != 5)
						{
							Nan::ThrowError("Too many parameters.");
							return;
						}
						r = native->IntersectsSphere2(
							info[0]->NumberValue(),
							info[1]->NumberValue(),
							info[2]->NumberValue(),
							info[3]->NumberValue(),
							info[4]->Int32Value()
						);
						info.GetReturnValue().Set(Nan::New(r));
						return;
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::IsA(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
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

void VtkKdNodeWrap::NewInstance(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	vtkKdNode * r;
	if(info.Length() != 0)
	{
		Nan::ThrowError("Too many parameters.");
		return;
	}
	r = native->NewInstance();
	v8::Local<v8::Value> argv[1] =
		{ Nan::New(vtkNodeJsNoWrap) };
	v8::Local<v8::Function> cons =
		Nan::New<v8::Function>(VtkKdNodeWrap::constructor);
	v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
	VtkKdNodeWrap *w = new VtkKdNodeWrap();
	w->native.TakeReference(r);
	w->Wrap(wo);
	info.GetReturnValue().Set(wo);
}

void VtkKdNodeWrap::PrintNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PrintNode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::PrintVerboseNode(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->PrintVerboseNode(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SafeDownCast(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkObjectWrap *a0 = ObjectWrap::Unwrap<VtkObjectWrap>(info[0]->ToObject());
		vtkKdNode * r;
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		r = native->SafeDownCast(
			(vtkObject *) a0->native.GetPointer()
		);
		v8::Local<v8::Value> argv[1] =
			{ Nan::New(vtkNodeJsNoWrap) };
		v8::Local<v8::Function> cons =
			Nan::New<v8::Function>(VtkKdNodeWrap::constructor);
		v8::Local<v8::Object> wo = cons->NewInstance(1, argv);
		VtkKdNodeWrap *w = new VtkKdNodeWrap();
		w->native.TakeReference(r);
		w->Wrap(wo);
		info.GetReturnValue().Set(wo);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetDataBounds(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsNumber())
	{
		if(info.Length() > 1 && info[1]->IsNumber())
		{
			if(info.Length() > 2 && info[2]->IsNumber())
			{
				if(info.Length() > 3 && info[3]->IsNumber())
				{
					if(info.Length() > 4 && info[4]->IsNumber())
					{
						if(info.Length() > 5 && info[5]->IsNumber())
						{
							if(info.Length() != 6)
							{
								Nan::ThrowError("Too many parameters.");
								return;
							}
							native->SetDataBounds(
								info[0]->NumberValue(),
								info[1]->NumberValue(),
								info[2]->NumberValue(),
								info[3]->NumberValue(),
								info[4]->NumberValue(),
								info[5]->NumberValue()
							);
							return;
						}
					}
				}
			}
		}
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetDim(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetDim(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetLeft(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkKdNodeWrap *a0 = ObjectWrap::Unwrap<VtkKdNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetLeft(
			(vtkKdNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetMaxID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMaxID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetMinID(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetMinID(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetNumberOfPoints(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsInt32())
	{
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetNumberOfPoints(
			info[0]->Int32Value()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetRight(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkKdNodeWrap *a0 = ObjectWrap::Unwrap<VtkKdNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetRight(
			(vtkKdNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

void VtkKdNodeWrap::SetUp(const Nan::FunctionCallbackInfo<v8::Value>& info)
{
	VtkKdNodeWrap *wrapper = ObjectWrap::Unwrap<VtkKdNodeWrap>(info.Holder());
	vtkKdNode *native = (vtkKdNode *)wrapper->native.GetPointer();
	if(info.Length() > 0 && info[0]->IsObject())
	{
		VtkKdNodeWrap *a0 = ObjectWrap::Unwrap<VtkKdNodeWrap>(info[0]->ToObject());
		if(info.Length() != 1)
		{
			Nan::ThrowError("Too many parameters.");
			return;
		}
		native->SetUp(
			(vtkKdNode *) a0->native.GetPointer()
		);
		return;
	}
	Nan::ThrowError("Parameter mismatch");
}

